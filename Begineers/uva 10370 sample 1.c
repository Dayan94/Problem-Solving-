#include <stdio.h>
#include<inttypes.h>

int main()
{
    double avg = 0, navg = 0;
    uint32_t t = 0;
    uint16_t n = 0, i = 0;
    uint8_t a[1001];

    scanf("%u", &t);

    while(t--)
    {
        avg = 0;
        scanf("%" SCNu16, &n);
        for(i = 0;i < n; i++)
        {
            scanf("%" SCNu8, &a[i]);
            avg += a[i];
        }
        avg/=n;

        navg = 0;
        for(i = 0; i < n; i++)
        {
            if(a[i] > avg) navg++;
        }

        printf("%.3lf%%\n", navg/n * 100);
    }

    return 0;
}
