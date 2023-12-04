#include <stdio.h>
int main(int argc, char *argv[]) {

    FILE *s, *t;

    char c;



    s = fopen(argv[1], "r"); 

    t = fopen(argv[2], "w");


    while ((c = fgetc(s)) != EOF)

        fputc(c, t);



    fclose(s);

    fclose(t);



    return 0;

}