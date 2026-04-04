#include <stdio.h>
#include <stdlib.h>
int main()
{
    //open
    FILE *fp = fopen("NameBirthday.txt", "r");
    if (fp == NULL)
    {
        return -1;
    }
    FILE *outp = fopen("output.txt", "w");
    if (outp == NULL)
    {
        return -1;
    }

    //read and write
    char buffer[255];
    while (fgets(buffer, 255, fp))
    {
        //printf("test %s", buffer);
        fseek(fp, -6, SEEK_CUR);
        char key[100];
        fgets(key, 5, fp);
        int num = atoi(key);
        if (num >= 1980)
        {
            fputs(buffer, outp);
        }
        fseek(fp, 2, SEEK_CUR);
    }

    //close
    fclose(fp);
    return 0;
}