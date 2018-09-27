#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    if(a > 10)
    {
        printf("You entered a number bigger than 10\n");
    }
    else if(a > 5)
    {
        printf("You entered a number bigger than 5 and less or equal to 10\n");
    }
    else
    {
        printf("You entered a number less or equal to 5\n");
    }

    return 0;
}
