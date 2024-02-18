%{ 
   /*
    Translator din limbaj PL-SQL in limbaj natural. 
    Proiectul s-a concentrat pe ceea ce difera dintre PL-SQL si SQL
   */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    //functie pentru a elimina anumite caractere
    char* substr(const char *src, int m, int n); 
    //declararea unor variabile auxiliare -- acestea se initializeaza in dreptul tipurilor de instructiuni care le folosesc
    char str_create[100]; //utilizat in concatenarile de la instructiunile de tip create
    char str_where[100];
    char str_insert[100];
    char str_insert_values[100];
    char str_set[100];
    char str_select[100];
    char str_ifCond[100];
    char str_thenExp[100];
    char str_elseExp[100];
    char str_forVar[100];
    char str_forExp[100];
    char str_inExp[100];
    char str_inVar[100];
    char str_inVar1[100];
    char str_isVar[100];
    char str_beginVar[100];
    char str_exceptionVar[100];
    char str_then1Exp[100];
    char str_baiio[100];
    char str_iouodd[100];
    char str_ferr[100];
    char str_cursor[100];

    char aux[50];
    char aux1[50];
    int poz=0;  
%}

%start instruction 
%union {char *word;}
%token <word> CREATE DROP DELETE INSERT INTO VALUES WHERE TABLE WORD AND OR ALTER COLUMN MODIFY RENAME ADD TO UPDATE IF THEN END SET EQ LTE GTE NQ ELSE FOR LOOP REVERSE IN SELECT FROM ALL PROCEDURE IS EXCEPTION OTHERS BEGINN REPLACE WHEN WHILE CASE TRIGGER OF AFTER INSTEAD EACH DECLARE ON ROW BEFORE CURSOR COMMIT CLOSE OPEN FETCH
%type <word> wordsCreate 
%type <word> wordsWhere
%type <word> wordsInsert wordsInsertValues 
%type <word> wordsSet
%type <word> delete where alter
%type <word> wordsCondition 
%type <word> wordsExpression 
%type <word> wordsforVar
%type <word> wordsInVar
%type <word> wordsSelect
%type <word> wordsIs
%type <word> str_iouod str_baio
%left ')' '(' ';' ',' '=' '>' '<' '[' ']' '{' '}'

%%
instruction : instruction create                      {
                                                       // instructiuni de tip create: table, trigger, procedure
                                                       // trigger-le si procedure-ile sunt specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_exceptionVar, ""); 
                                                       strcpy(str_beginVar, ""); 
                                                       strcpy(str_isVar, ""); 
                                                       strcpy(str_create, ""); 
                                                       strcpy(str_cursor, "");
                                                       }
            | instruction select                      {
                                                       // instructiuni de tip select: select all cu si fara clauza WHERE, select columns cu si fara clauza WHERE
                                                       // specific PL-SQL: select into variable -- rezultatul de la select va fi retinut intr-o anumita variabila
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_where, ""); 
                                                       strcpy(str_select, "");
                                                      }
            | instruction drop                        { /* instructiune de tip drop: table, procedure - cea mai usoara instructiune in PL-SQL */ }
            | instruction delete                      {
                                                       // instructiuni de tip delete: table
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_where, "");
                                                      }
            | instruction insert                      {
                                                       // instructiuni de tip insert: in table
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_insert, ""); 
                                                       strcpy(str_insert_values, "");
                                                      }
            | instruction alter                       { /* instructiuni de tip alter table*/}
            | instruction update                      {
                                                       // instructiuni de tip update: table - cu si fara clauza where
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_where, ""); 
                                                       strcpy(str_set, "");
                                                      }
            | instruction iff                         {
                                                       // instructiuni de tip if - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_ifCond, ""); 
                                                       strcpy(str_thenExp, "");
                                                       strcpy(str_elseExp, "");
                                                      }
            | instruction foor                        {
                                                       // instructiuni de tip for - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_forVar, ""); 
                                                       strcpy(str_inVar, "");
                                                       strcpy(str_inVar1, ""); 
                                                       strcpy(str_thenExp, "");
                                                      }
            | instruction whilee                      {
                                                       // instructiuni de tip while - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_forVar, ""); 
                                                       strcpy(str_thenExp, "");
                                                      }     
            | instruction casee                      {
                                                       // instructiuni de tip case - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_select, ""); 
                                                       strcpy(str_forVar, "");
                                                       strcpy(str_inVar, "");
                                                       strcpy(str_thenExp, "");
                                                       strcpy(str_then1Exp, "");
                                                       
                                                      }                                                                                            
            | /* EMPTY */
            ;

create : CREATE TABLE WORD '(' wordsCreate ')' ';'                                                                                                          { 
                                                                                                                                                              // crearea unui table 
                                                                                                                                                              printf("Create the table named %s that has the following columns, respectively date types: %s.\n", $3, str_create);
                                                                                                                                                            }
       | CREATE OR REPLACE PROCEDURE WORD '(' wordsCreate ')' IS wordsIs BEGINN wordsBegin EXCEPTION WHEN OTHERS THEN wordsException END ';'                {
                                                                                                                                                              // crearea unei procedure           
                                                                                                                                                              printf("Create or replace a procedure called %s with the following parameters: %s. Inside it, declare the local variables: %s, and inside the body %s. If there is an exception then %s.\n", $5, $7, str_isVar, str_beginVar, str_exceptionVar);
                                                                                                                                                            }
       | CREATE OR REPLACE TRIGGER WORD str_baio str_iouod ON WORD str_fer WHEN WORD DECLARE wordsIs BEGINN wordsBegin END ';'                              { 
                                                                                                                                                              // crearea unui trigger fara caz de exceptie
                                                                                                                                                              printf("Create or replace trigger %s, %s, %s on %s, %s when %s declare %s, begin %s.\n ", $5, str_baiio, str_iouodd, $9, str_ferr, $12, str_isVar, str_beginVar);                     
                                                                                                                                                            }   
       | CREATE OR REPLACE TRIGGER WORD str_baio str_iouod ON WORD str_fer WHEN WORD DECLARE wordsIs BEGINN wordsBegin EXCEPTION wordsException END  ';'    { 
                                                                                                                                                              // crearea unui trigger cu caz de exceptie
                                                                                                                                                              printf("Create or replace trigger %s, %s, %s on %s, %s when %s declare %s, begin %s except %s .\n ", $5, str_baiio, str_iouodd, $9, str_ferr, $12, str_isVar, str_beginVar, str_exceptionVar);                     
                                                                                                                                                            }                                                                                                                                                                                                                                                             
       ;

str_fer   : FOR EACH ROW                                 { strcat(str_ferr, "FOR EACH ROW ");}
          | /* EMPTY */
          ;

str_baio  : BEFORE                                       { strcat(str_baiio, "BEFORE ");}
          | AFTER                                        { strcat(str_baiio, "AFTER ");}
          | INSTEAD OF                                   { strcat(str_baiio, "INSTEAD OF ");}
          | /* EMPTY */                                  { strcat(str_baiio, "");}
          ;

str_iouod : INSERT                                       { strcat(str_iouodd, "INSERT ");}
          | UPDATE                                       { strcat(str_iouodd, "UPDATE ");}
          | DELETE                                       { strcat(str_iouodd, "DELETE ");}
          | str_iouod OR str_iouod                       { /* pentru multiplicitatea variantelor de triggere */}
          ;          

drop : DROP TABLE WORD ';'                           { 
                                                      // stergerea tabelului
                                                      printf("Delete the table named %s.\n", $3);
                                                     }
     | DROP PROCEDURE WORD ';'                       { 
                                                      // stergerea procedurii
                                                      printf("Delete the procedure named %s.\n", $3);
                                                     }
     ;

delete : DELETE FROM WORD where ';'                  {  // stergerea tuturor elementelor unui tabel, cu clauza where
                                                        // conversie din upperCase in lowerCase
                                                        char strAux[100];
                                                        for(int i = 0; i < strlen($3); i++){ 
                                                            char c = tolower($3[i]);
                                                            strAux[i] = c;
                                                        }
                                                        printf("Delete all %s who have %s from the table.\n", strAux, str_where);
                                                     }
       | DELETE FROM WORD ';'                        {  
                                                        // stergerea tuturor elementelor unui tabel, cu clauza where
                                                        // conversie din upperCase in lowerCase
                                                        char strAux[100];
                                                        for(int i = 0; i < strlen($3); i++){
                                                            char c = tolower($3[i]);
                                                            strAux[i] = c;
                                                        }
                                                        printf("Delete all %s from the table.\n", strAux);
                                                     }
       ;

insert : INSERT INTO WORD '(' wordsInsert ')' VALUES '(' wordsInsertValues ')' ';'           { 
                                                                                               // instructiunea insert cu denumirea coloanelor in clauza
                                                                                               // conversie din upperCase in lowerCase
                                                                                               char strAux[100];
                                                                                               for(int i = 0; i < strlen($3); i++){
                                                                                                    char c = tolower($3[i]);
                                                                                                    strAux[i] = c;
                                                                                               }
                                                                                               
                                                                                               // eliminarea pluralului
                                                                                               if(strAux[strlen(strAux) - 1] == 's' && strAux[strlen(strAux) - 2] != 's'){
                                                                                                    char *s = substr(strAux, 0, strlen($3) - 1);
                                                                                                    printf("Add the following %s to the table: %s.\n", s, str_insert_values);
                                                                                               }
                                                                                               else
                                                                                               {
                                                                                                    printf("Add the following %s to the table: %s.\n", $3, str_insert_values);
                                                                                               }
                                                                                             }
       | INSERT INTO WORD VALUES '(' wordsInsertValues ')' ';'                               { 
                                                                                              // instructiunea insert fara denumirea coloanelor in clauza
                                                                                               char strAux[100];
                                                                                               for(int i = 0; i < strlen($3); i++){
                                                                                                    char c = tolower($3[i]);
                                                                                                    strAux[i] = c;
                                                                                               }
                                                                                               
                                                                                               // eliminarea pluralului
                                                                                               if(strAux[strlen(strAux) - 1] == 's' && strAux[strlen(strAux) - 2] != 's'){
                                                                                                    char *s = substr(strAux, 0, strlen($3) - 1);
                                                                                                    printf("Add the following %s to the table: %s.\n", s, str_insert_values);
                                                                                               }
                                                                                               else
                                                                                               {
                                                                                                    printf("Add the following %s to the table: %s.\n", $3, str_insert_values);
                                                                                               }
                                                                                             }
       ;

where : WHERE wordsWhere                             { }
      ;

alter : ALTER TABLE WORD ADD WORD WORD ';'               { printf("Add to the %s table the column with the name %s and the data type %s.\n", $3, $5, $6);}
      | ALTER TABLE WORD DROP COLUMN WORD ';'            { printf("Delete column %s from table %s.\n", $6, $3);}
      | ALTER TABLE WORD RENAME COLUMN WORD TO WORD ';'  { printf("Rename column %s with name %s from table %s.\n", $6, $8, $3);}
      | ALTER TABLE WORD ALTER COLUMN WORD WORD ';'      { printf("Change the data type of column %s to %s in table %s.\n", $6, $7, $3);}
      | ALTER TABLE WORD MODIFY COLUMN WORD WORD ';'     { printf("Change the data type of column %s to %s in table %s.\n", $6, $7, $3);}
      | ALTER TABLE WORD MODIFY WORD WORD ';'            { printf("Change the data type of column %s to %s in table %s.\n", $5, $6, $3);}
      ;

update : UPDATE WORD set where ';'                       { printf("Modify the %s table so that %s for the element that has %s.\n", $2, str_set, str_where);}
       | UPDATE WORD set ';'                             { printf("Modify the %s table so that %s.\n", $2, str_set);}
       ;

set : SET wordsSet                                       {}
    ;


iff : IF wordsCondition THEN wordsExpression END IF ';'                                      { printf("Check if %s then %s.\n", str_ifCond, str_thenExp);}
    | IF wordsCondition THEN wordsExpression ELSE elseExpression END IF ';'                  { printf("Check if %s then %s, else do: %s.\n", str_ifCond, str_thenExp, str_elseExp);}
    ;

casee : SELECT wordsSelect CASE wordsforVar when ELSE thenExpression END FROM WORD ';'       {  
                                                                                                //instructiunea case -- inclusa intre clauzele unui select
                                                                                                printf("Select %s, in case %s %s. \n", str_select, str_forVar, str_inVar);
                                                                                             }
      ;

when : WHEN WORD THEN WORD ';'                                                               {
                                                                                              // structura unui case implica aparitia unor clauze de tip WHEN... THEN
                                                                                              strcat(str_inVar, " when ");
                                                                                              strcat(str_inVar, $2); 
                                                                                              strcat(str_inVar, " then "); 
                                                                                              strcat(str_inVar, $4); 
                                                                                              strcat(str_inVar, " ");
                                                                                             }
     | when when                                                                             { /* pot exista mai multe clauze de tip WHEN... THEN*/}
     ;

whilee : WHILE wordsCondition LOOP wordsExpression END LOOP ';'                              { printf("While %s, do this: %s.\n", str_ifCond, str_thenExp);}
       ;

foor : FOR wordsforVar IN wordsInVar LOOP wordsExpression END LOOP ';'                       { 
                                                                                                printf("For a %s which has value in %s and %s, do this: %s.\n", str_forVar, str_inVar, str_inVar1, str_thenExp);
                                                                                             }
     | FOR wordsforVar IN REVERSE wordsInVar LOOP wordsExpression END LOOP ';'               { 
                                                                                                printf("For a %s which has value in %s and %s, do this: %s.\n", str_forVar, str_inVar, str_inVar1, str_thenExp);
                                                                                             }
     ;

select : SELECT ALL FROM WORD ';'                            { 
                                                               // instructiunea select: afisarea tuturor coloanelor tabelului, fara o clauza where
                                                               printf("Get all %s.\n", $4);
                                                             }
       | SELECT ALL INTO WORD FROM WORD where ';'            {
                                                               // instructiunea select: afisarea tuturor coloanelor tabelului intr-o variabila, cu o clauza where
                                                               strcat(str_beginVar, " assign the variable "); 
                                                               strcat(str_beginVar, $4); 
                                                               strcat(str_beginVar, " the result of get all "); 
                                                               strcat(str_beginVar, $6);  

                                                               //printf("Assign the variable %s the result of get all %s.\n", $4, $6);
                                                             }
       | SELECT wordsSelect FROM WORD ';'                    { 
                                                               // instructiunea select: afisarea unor coloane ale tabelului, fara o clauza where
                                                               printf("Get %s for %s.\n", str_select, $4);
                                                             }
       | SELECT ALL FROM WORD where ';'                      { 
                                                               // instructiunea select: afisarea tuturor coloanelor tabelului, cu o clauza where
                                                               printf("Get all %s with property/ies: %s.\n", $4, str_where);
                                                             }
       | SELECT wordsSelect FROM WORD where ';'              { 
                                                               // instructiunea select: afisarea unor coloane ale tabelului, cu o clauza where
                                                               //printf("Get %s for %s with property/ies: %s.\n", str_select, $4, str_where);
                                                               char temp[100];
                                                               strcpy(temp, str_select);
                                                               strcpy(str_select, "");
                                                               strcat(str_select, " get ");
                                                               strcat(str_select, temp);
                                                               strcat(str_select, " for ");
                                                               strcat(str_select, $4);
                                                               strcat(str_select, " ");
                                                               strcat(str_select, str_where);
                                                               strcat(str_select, " ");
                                                             }
       | SELECT wordsSelect INTO WORD FROM WORD where ';'    { 
                                                               // instructiunea select: afisarea unor coloane ale tabelului intr-o variabila, cu o clauza where
                                                               printf("Assign the variable %s the result of get %s for %s with property/ies: %s.\n", $4, str_select, $6, str_where);
                                                             }
       ;

wordsSelect : WORD                                { 
                                                   // stocarea coloanelor pentru instructiunea select
                                                   strcat(str_select, $1);
                                                   strcat(str_select, " ");

                                                  }
            | wordsSelect ',' wordsSelect         { /* coloane multiple in select */}
            ;
          

wordsforVar : WORD                        { strcat(str_forVar, $1); }
            ;

wordsInVar  : WORD                        { // e nevoie de un split
                                            int count = 0, count1 = 0;

                                            for(int i = 0; i < strlen($1); i++){
                                              if($1[i] == '.') {
                                                //printf('a');
                                                poz = i;
                                                break;
                                              }
                                              aux[count] = $1[i];
                                              count++;
                                            }

                                            aux[count] = '\n';
                                            for(poz = poz+2; poz < strlen($1); poz++){
                                              aux1[count1] = $1[poz];
                                              count1++;
                                            }
                                            aux1[count1] = '\n';
                                            // printf("DENISS!! ");
                                            // printf("%s", aux);
                                            // printf("%s", aux1);
                                            // printf("FINAL DENINS ");
                                            strcat(str_inVar, aux); 
                                            strcat(str_inVar1, aux1); 

                                          }
            ;
   
wordsCondition : WORD                                                         { 
                                                                                // variabila e true
                                                                                strcat(str_ifCond, $1);
                                                                              }
                | WORD EQ WORD                                                { 
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " is equal ");
                                                                                strcat(str_ifCond, $3);
                                                                              }
                | WORD '<' WORD                                               { 
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " is smaller than ");
                                                                                strcat(str_ifCond, $3);                                                                                
                                                                              }
                | WORD '>' WORD                                               { 
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " is greater than ");
                                                                                strcat(str_ifCond, $3);
                                                                              }
                | WORD LTE WORD                                               { 
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " is smaller or equal than ");
                                                                                strcat(str_ifCond, $3);                                                                                
                                                                              }
                | WORD GTE WORD                                               { 
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " is greater or equal than ");
                                                                                strcat(str_ifCond, $3);                                                                                
                                                                              }
                | WORD NQ WORD                                                { 
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " is not equal to ");
                                                                                strcat(str_ifCond, $3);                                                                                
                                                                              }
                | wordsCondition AND wordsCondition                           { 
                                                                                // conditii care trebuie indeplinite simultan
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " AND ");
                                                                                strcat(str_ifCond, $3);                                                                                
                                                                              }
                | wordsCondition OR wordsCondition                            { 
                                                                                // conditii care trebuie indeplinite in paralel
                                                                                strcat(str_ifCond, $1);
                                                                                strcat(str_ifCond, " OR ");
                                                                                strcat(str_ifCond, $3);                                                                                
                                                                              }
                ;

wordsExpression : WORD ';'                                                    { 
                                                                                // instructiunile care se executa in bucla for
                                                                                strcat(str_thenExp, $1);
                                                                                strcat(str_thenExp, " ");
                                                                              }
                | wordsExpression wordsExpression                             { /* multiplicitate instructiuni */}
                ;

thenExpression : WORD ';'                                                     {
                                                                                // instructiuni de pe prima ramura a if-ului
                                                                                strcat(str_then1Exp, $1);
                                                                                strcat(str_then1Exp, " ");
                                                                              }
                | wordsExpression wordsExpression                             { /* multiplicitate instructiuni */}
                ;

elseExpression : WORD ';'                                                    {
                                                                               // instructiuni de pe ramura else a if-ului
                                                                               strcat(str_elseExp, $1);
                                                                               strcat(str_elseExp, " ");                                                                        
                                                                             }
                | elseExpression elseExpression                              { /* multiplicitate instructiuni */}
                ;

wordsSet : WORD '=' WORD                                 {
                                                           strcat(str_set, "column ");
                                                           strcat(str_set, $1);
                                                           strcat(str_set, " to have the value ");
                                                           strcat(str_set, $3);
                                                           strcat(str_set, ", ");
                                                         }
         | wordsSet ',' wordsSet                         { /* multiplicitate instructiuni */}
         ;

wordsInsert : WORD                                            { 
                                                                // denumirea coloanelor unde dorim sa inseram valori
                                                                strcat(str_insert, $1);
                                                                strcat(str_insert, " ");
                                                              }
            | wordsInsert ',' wordsInsert                     { /* multiplicitatea coloanelor in clauza insert*/}
            ;

wordsInsertValues : WORD                                      {
                                                                //valorile pe care dorim sa le inseram
                                                                strcat(str_insert_values, $1);
                                                                strcat(str_insert_values, " ");
                                                              }
                  | wordsInsertValues ',' wordsInsertValues   { /* multiplicitatea valorilor in clauza insert */ }
                  ;

wordsWhere : WORD '=' WORD                           { 
                                                        // cazurile de baza ale WHERE
                                                        strcat(str_where, $1);
                                                        strcat(str_where, " equal to ");
                                                        strcat(str_where, $3);
                                                     }
           | WORD '>' WORD                           { 
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " is greater than ");
                                                        strcat(str_ifCond, $3);
                                                     }
           | WORD '<' WORD                           { 
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " is smaller than ");
                                                        strcat(str_ifCond, $3);
                                                      }
           | WORD '>' WORD                            { 
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " is greater than ");
                                                        strcat(str_ifCond, $3);                                                        
                                                      }
           | WORD LTE WORD                            { 
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " is smaller or equal than ");
                                                        strcat(str_ifCond, $3);                                                        
                                                      }
           | WORD GTE WORD                            { 
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " is greater or equal than ");
                                                        strcat(str_ifCond, $3);                                                        
                                                      }
           | WORD NQ WORD                             { 
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " is not equal to ");
                                                        strcat(str_ifCond, $3);                                                        
                                                      }
           | wordsWhere AND wordsWhere                { 
                                                        // conditii care trebuie indeplinite simultan
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " AND ");
                                                        strcat(str_ifCond, $3);                                                                                
                                                      }
           | wordsWhere OR wordsWhere                 { 
                                                        // conditii care trebuie indeplinite in paralel
                                                        strcat(str_ifCond, $1);
                                                        strcat(str_ifCond, " OR ");
                                                        strcat(str_ifCond, $3);                                                                                
                                                      }
           ;

wordsCreate : WORD WORD                              { 
                                                       // creat pentru instructiunea de creare a unui tabel sau a unei proceduri
                                                       // in primul WORD ($1) -- RETINEM NUMELE COLOANEI
                                                       strcat(str_create, $1);
                                                       strcat(str_create, " ");
                                                       // in al doilea WORD ($2) -- RETINEM TIPUL DE DATA
                                                       strcat(str_create, $2);
                                                       strcat(str_create, " ");
                                                     }
            | wordsCreate ',' wordsCreate            { /* creat pentru cazul in care cream un tabel cu mai multe coloane*/}
            ;

wordsIs : WORD WORD ';'                              { 
                                                       // creat pentru instructiunea de creare a unei proceduri si a unui trigger
                                                       // in primul WORD ($1) -- RETINEM NUMELE VARIABILEI
                                                       strcat(str_isVar, $1);
                                                       strcat(str_isVar, " ");
                                                       // in al doilea WORD ($2) -- RETINEM TIPUL DE DATA AL VARIABILEI
                                                       strcat(str_isVar, $2);
                                                       strcat(str_isVar, " ");
                                                     }
        | wordsCursor select ';'                     {
                                                       // pentru proceduri
                                                       // in structura acestora pot aparea cursori 
                                                       // care retin ceea ce returneaza o instructiune de tip select
                                                       strcat(str_isVar, str_cursor); 
                                                       strcat(str_isVar, str_select);
                                                     }
        | wordsIs wordsIs                            { /* pentru cazurile de duplicate */}
        ;

wordsBegin : select                                                                         {/* tipuri de instructiuni din interiorul procedurii -- din body */}
           | select WORD ';'                                                                { 
                                                                                              strcat(str_beginVar, " and do ");
                                                                                              strcat(str_beginVar, $2);
                                                                                            }
           | OPEN WORD ';' FETCH WORD INTO WORD ';' iff insert COMMIT ';' CLOSE WORD ';'    {
                                                                                              // alta structura din interiorul body-ului unei proceduri
                                                                                              strcpy(str_beginVar, ""); 
                                                                                              printf("Open %s and fetch %s into %s and commit. Close %s.\n",$2, $5, $7, $14);
                                                                                            }    
           | WORD ';'                                                                       { 
                                                                                              // in body-ul unei proceduri putem avea doar cuvinte -- instructiuni elementare
                                                                                              strcat(str_beginVar, " "); 
                                                                                              strcat(str_beginVar, $1);
                                                                                            }
           | wordsBegin wordsBegin                                                          { /* combinatii ale acestora se pot regasi */}                 
           | wordsBegin ';' wordsBegin ';'                                                  { /* combinatii ale acestora se pot regasi */}
           ;

wordsCursor : CURSOR WORD IS    { 
                                  // declararea unui cursor -- specific PL-SQL
                                  strcat(str_cursor, "Assign the cursor named "); 
                                  strcat(str_cursor, $2); strcat(str_cursor, " the result of ");
                                }

wordsException : WORD ';'                             { 
                                                       // procedure si trigger pot returna exceptii
                                                       strcpy(str_exceptionVar, " ");
                                                       strcat(str_exceptionVar, $1);
                                                       strcat(str_exceptionVar, " ");
                                                      }
               | wordsException ';' wordsException    { /* pentru cazurile de multiplicare a exceptiilor*/}
               ;


%%


int main(){
    yyparse();
    return 0;
}

yyerror(){
    ;
}
