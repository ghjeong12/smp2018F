#include <stdio.h>

int main()
{
    int a;
    // scanf("%d", &a);
    // printf("You entered %d\n", a);
    
    char b = 'A';
    char c = 'a';

    char input;
    char sentence[20]= "test sentence";

    printf("%d is %c\n", b, b);
    printf("%d is %c\n", c, c);

    scanf("%c", &input);
    printf("%c", input + (c-b));
    
    printf("%s", sentence);
    return 0;  
}
