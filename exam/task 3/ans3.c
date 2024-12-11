#include <stdio.h>

void main()
{
    int s, rem;
    int rev = 0;

    printf("enter any number:");
    scanf("%d", &s);


    while (s != 0) //132
    {
        rem = s % 10; //2
        rev = rev * 10 + rem; //0*10 + 2 = 2
        s = s / 10; //
    }
    printf("reverse number is :%d", rev);
}