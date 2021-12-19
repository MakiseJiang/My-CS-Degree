#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char const *argv[])
{
    char buffer[MAX];
    if (argc != 2) {
        exit(0);
    }
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("wcat: cannot open file\n");
        exit(1);
    }
    while (fgets(buffer, MAX, fp))
    {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
