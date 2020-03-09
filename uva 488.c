#include<stdio.h>

int main()
{
    unsigned short test_case = 0, amplitude = 0, frequency = 0, i =0, j = 0;

    scanf("%hu", &test_case);
    while(test_case--)
    {
        scanf("%hu", &amplitude);
        scanf("%hu", &frequency);
        while(frequency--)
        {
            for(i = 1; i <= amplitude; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("%hu", i);
                }
                printf("\n");
            }
            for(i = amplitude - 1; i >= 1; i--)
            {
                for(j = i; j >= 1; j--)
                {
                    printf("%hu", i);
                }
                printf("\n");
            }
            if(frequency) printf("\n");
        }
        if(test_case) printf("\n");
    }
    return 0;
}

