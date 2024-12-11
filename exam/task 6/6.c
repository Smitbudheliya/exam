#include <stdio.h>

void main()

{

    FILE *fp;

    fp = fopen("data.text", "r");
    if (fp != '\0')
    {
        char msg[50];

        fscanf(fp, "%[^\a]", &msg);
        printf("%s", msg);
        fclose(fp);
    }

    else
    {
        printf("File is not open...");
    }
     
    return 0;
}