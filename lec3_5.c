#include <stdio.h>

int main()
{
    int input;
    int i = 0;
    scanf("%d", &input);

    for(i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", input, i, input*i);
    }
}
