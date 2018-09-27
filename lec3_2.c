#include <stdio.h>

int main()
{
    int a;
    int b;

    for(a= 0; a < 10; a++)
    {
        for(b=0; b<a+1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
