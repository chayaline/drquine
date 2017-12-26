#include <stdio.h>
/*
    ceci est un commentaire
*/
char *spaces(){
    return "    ";
}

int main (void) {
/*
    ceci est un autre commentaire
*/
    char *s1="#include <stdio.h>%1$c/*%1$c%2$sceci est un commentaire%1$c*/%1$cchar *spaces(){%1$c%2$sreturn %3$c    %3$c;%1$c}%1$c%1$c";
    char *s2="int main (void) {%1$c/*%1$c%2$sceci est un autre commentaire%1$c*/%1$c%2$schar *s1=%3$c%4$s%3$c;%1$c%2$schar *s2=%3$c%5$s%3$c;%1$c%2$sprintf(s1, 10, spaces(), 34);%1$c%2$sprintf(s2, 10, spaces(), 34, s1, s2);%1$c%2$sreturn (0);%1$c}";
    printf(s1, 10, spaces(), 34);
    printf(s2, 10, spaces(), 34, s1, s2);
    return (0);
}