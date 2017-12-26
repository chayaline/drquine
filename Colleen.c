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
    char q = '"';
    char *s1="#include <stdio.h>%c/*%c%sceci est un commentaire%c*/%cchar *spaces(){%c%sreturn %c    %c;%c}%c%c";
    char *print="printf(";
    char *s2="int main (void) {%c/*%c%sceci est un autre commentaire%c*/%c%schar q = '%c';%c%schar *s1=%c%s%c;%c%schar *print=%c%s%c;%c%schar *s2=%c%s%c;%c%s%ss1, 10, 10, spaces(), 10, 10,  10, spaces(), q, q, 10, 10, 10);%c%s%ss2, 10, 10, spaces(), 10, 10, spaces(), q, 10, spaces(), q, s1, q, 10, spaces(), q, print, q, 10, spaces(), q, s2, q, 10, spaces(), print, 10, spaces(), print, 10, spaces(), 10, 10, spaces(), 10);%c%sreturn (0);%c}";
    printf(s1, 10, 10, spaces(), 10, 10,  10, spaces(), q, q, 10, 10, 10);
    printf(s2, 10, 10, spaces(), 10, 10, spaces(), q, 10, spaces(), q, s1, q, 10, spaces(), q, print, q, 10, spaces(), q, s2, q, 10, spaces(), print, 10, spaces(), print, 10, spaces(), 10, 10, spaces(), 10);
    return (0);
}