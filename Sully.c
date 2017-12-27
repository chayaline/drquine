#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main (void) {
    int count = 5;
    char filepath[256];
    if (count > 0) {
        count = strcmp(__FILE__, "Sully.c") ? count-1 : count;
        sprintf(filepath, "Sully_%d", count);
        char *filename = strdup(filepath);
        strcat(filepath, ".c");
        char compile[256] = "gcc -o";
        sprintf(compile, "%s %s %s ; ./%s", compile, filename, filepath, filename);
        void *fd = fopen(filepath, "w+");
        char *s1 = "#include <stdio.h>%1$c#include <string.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c%1$c";
        char *s2 = "int main (void) {%1$c    int count = %2$d;%1$c    char filepath[256];%1$c    if (count > 0) {%1$c        count = strcmp(__FILE__, %3$cSully.c%3$c) ? count-1 : count;%1$c        sprintf(filepath, %3$cSully_%%d%3$c, count);%1$c        char *filename = strdup(filepath);%1$c        strcat(filepath, %3$c.c%3$c);%1$c        char compile[256] = %3$cgcc -o%3$c;%1$c        sprintf(compile, %3$c%%s %%s %%s ; ./%%s%3$c, compile, filename, filepath, filename);%1$c        void *fd = fopen(filepath, %3$cw+%3$c);%1$c";
        char *s3 = "        char *s1 = %2$c%3$s%2$c;%1$c        char *s2 = %2$c%4$s%2$c;%1$c        char *s3 = %2$c%5$s%2$c;%1$c        fprintf(fd, s1, 10);%1$c        fprintf(fd, s2, 10, count, 34);%1$c        fprintf(fd, s3, 10, 34, s1, s2, s3);%1$c        fclose(fd);%1$c        system(compile);%1$c    }%1$c    return 0;%1$c}";
        fprintf(fd, s1, 10);
        fprintf(fd, s2, 10, count, 34);
        fprintf(fd, s3, 10, 34, s1, s2, s3);
        fclose(fd);
        system(compile);
    }
    return 0;
}