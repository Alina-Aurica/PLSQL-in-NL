%{
    #include "y.tab.c"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    char* substr(const char *src, int m, int n);
%}

%%
[ \t\n]                                       ;
("CREATE"|"create")                           {return CREATE;}
("SELECT"|"select")                           {return SELECT;}
("DROP"|"drop")                               {return DROP;}
("DELETE"|"delete")                           {return DELETE;}
("INSERT"|"insert")                           {return INSERT;}
("INTO"|"into")                               {return INTO;}
("VALUES"|"values")                           {return VALUES;}
("ALTER"|"alter")                             {return ALTER;}
("ADD"|"add")                                 {return ADD;}
("RENAME"|"rename")                           {return RENAME;}
("COLUMN"|"column")                           {return COLUMN;}
("MODIFY"|"modify")                           {return MODIFY;}
("UPDATE"|"update")                           {return UPDATE;}
("SET"|"set")                                 {return SET;}
("FROM"|"from")                               {return FROM;}
("WHERE"|"where")                             {return WHERE;}
("TABLE"|"table")                             {return TABLE;}
("AND"|"and")                                 {return AND;}
("OR"|"or")                                   {return OR;}
("TO"|"to")                                   {return TO;}
("IF"|"if")                                   {return IF;}
("THEN"|"then")                               {return THEN;}
("ELSE"|"else")                               {return ELSE;}
("END"|"end")                                 {return END;}
("FOR"|"for")                                 {return FOR;}
("IN"|"in")                                   {return IN;}
("LOOP"|"loop")                               {return LOOP;}
("REVERSE"|"reverse")                         {return REVERSE;}
("PROCEDURE"|"procedure")                     {return PROCEDURE;}
("IS"|"is")                                   {return IS;}
("BEGIN"|"begin")                             {return BEGINN;}
("EXCEPTION"|"exception")                     {return EXCEPTION;}
("WHEN"|"when")                               {return WHEN;}
("OTHERS"|"others")                           {return OTHERS;}
("REPLACE"|"replace")                         {return REPLACE;}
("WHILE"|"while")                             {return WHILE;}
("CASE"|"case")                               {return CASE;}
("TRIGGER"|"trigger")                         {return TRIGGER;}
("OF"|"of")                                   {return OF;}
("AFTER"|"after")                             {return AFTER;}
("INSTEAD"|"instead")                         {return INSTEAD;}
("BEFORE"|"before")                           {return BEFORE;}
("EACH"|"each")                               {return EACH;}
("DECLARE"|"declare")                         {return DECLARE;} 
("ON"|"on")                                   {return ON;}   
("ROW"|"row")                                 {return ROW;}
("CURSOR"|"cursor")                           {return CURSOR;}    
("OPEN"|"open")                               {return OPEN;}                                       
("COMMIT"|"commit")                           {return COMMIT;}
("FETCH"|"fetch")                             {return FETCH;}   
("CLOSE"|"close")                             {return CLOSE;}    
\(                                            {return '(';}
\)                                            {return ')';}
\;                                            {return ';';}
\,                                            {return ',';}
"<>"                                          {return NQ;}
"=="                                          {return EQ;}
"<="                                          {return LTE;}
">="                                          {return GTE;}
\=                                            {return '=';}
\<                                            {return '<';}
\>                                            {return '>';}
\*                                            {return ALL;}
\[                                            {return '[';}
\]                                            {return ']';}
\{                                            {return '{';}
\}                                            {return '}';}
[a-zA-Z0-9\.\(\)\-\_\'\"\%\*\+\/\=\:\|\>]+    {
                                                if(yytext[0] == '\'' || yytext[0] == '"') {
                                                    yylval.word = strdup(substr(yytext, 1, yyleng-1)); 
                                                } else {
                                                    yylval.word = strdup(yytext); 
                                                }
                                                return WORD;
                                              } 
.                                             {yyerror ("unexpected character");}                                            




%%

char* substr(const char *src, int m, int n)
{
    int len = n - m;
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
 
    for (int i = m; i < n && (*(src + i) != '\0'); i++)
    {
        *dest = *(src + i);
        dest++;
    }
 
    *dest = '\0';
 
    return dest - len;
}

