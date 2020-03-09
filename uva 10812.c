#include<stdio.h>

int main()
{
    unsigned int test_case = 0, sum = 0, difference = 0, score1 = 0, score2 = 0;
    scanf("%u", &test_case);
    while(test_case--)
    {
        scanf("%d %d", &sum, &difference);
        if(sum < difference || (sum + difference) % 2 != 0)
            printf("impossible\n");
        else
            printf("%d %d\n", (sum + difference) / 2, (sum - difference) / 2);

    }
    return 0;
}
