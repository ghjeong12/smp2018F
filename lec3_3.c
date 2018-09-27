#include <stdio.h>

int main()
{
    int sum = 0;
    int input;
    int num_scores;
    int i;

    printf("Enter the number of scores: ");
    scanf("%d", &num_scores);

    for (i = 0; i < num_scores; i++)
    {
        scanf("%d", &input);
        sum += input;
    }
    
    printf("Average score is %d\n", sum/num_scores);
    
    return 0;
}
