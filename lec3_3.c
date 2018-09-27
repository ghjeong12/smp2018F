#include <stdio.h>

int main()
{
    float sum = 0;
    float input;
    int num_scores;
    int i;

    printf("Enter the number of scores: ");
    scanf("%d", &num_scores);

    for (i = 0; i < num_scores; i++)
    {
        scanf("%f", &input);
        sum += input;
    }
    
    printf("Average score is %f\n", (sum/num_scores)*1.0);
    
    return 0;
}
