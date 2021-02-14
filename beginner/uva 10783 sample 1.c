#include<stdio.h>

int main()
{
    unsigned char t = 0, i = 0;
    unsigned short int a = 0, b = 0;
    unsigned int sum = 0;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%hu %hu", &a, &b);
        sum = 0;
        if(a%2 == 0) a++;
        while(a <= b)
        {
            sum += a;
            a += 2;
        }
        printf("Case %hhu: %u\n", i, sum);
    }
    return 0;
}


