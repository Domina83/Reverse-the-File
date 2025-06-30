#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int i, pos;

    fp = fopen("cpp.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    fprintf(fp, "Hi everyone nice to meet you");
    fclose(fp);

    fp = fopen("cpp.txt", "r");
    if (fp == NULL) {
        printf("File does not exist..");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    i = 0;

    while (i < pos) {
        i++;
        fseek(fp, -i, SEEK_END);
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
