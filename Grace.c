#include <stdio.h>
#define BR 10
#define S1 "#include <stdio.h>%1$c#define BR 10%1$c#define S1 %2$c%3$s%2$c%1$c#define GRACE(x)int main(){     void *kid = fopen(%2$c./Grace_kid.c%2$c, %2$cw%2$c); %4$c%1$c    fprintf(kid, S1, BR, 34, S1, 92); %4$c%1$c    return 0; %4$c%1$c}%1$c%1$c/*%1$c    Grace kid%1$c*/%1$c%1$cGRACE();"
#define GRACE(x)int main(){     void *kid = fopen("./Grace_kid.c", "w"); \
    fprintf(kid, S1, BR, 34, S1, 92); \
    return 0; \
}

/*
    Grace kid
*/

GRACE();