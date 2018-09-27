#include <stdio.h>

int main()
{
    int a;
    int b;
    
    int num_lines;
    
    printf("Enter the number of lines: ");
    scanf("%d", &num_lines);

    for(a= 0; a < num_lines; a++)
    {
        for(b=0; b<num_lines-a-1; b++)
        {
            printf(" ");
        }
        for(b=0; b<a+1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
