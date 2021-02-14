#include <stdio.h>

int main()
{
    unsigned long sum = 0, i = 0, x = 0;
    while(scanf("%d", &x) != EOF)
    {
        sum = 0;

        for(i = 1; i<= x; i++)
        {
            sum+=(i*i*i);
        }

        printf("%lu\n", sum);
    }
    return 0;
}
