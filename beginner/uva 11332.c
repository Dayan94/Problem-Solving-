#include<stdio.h>

int main()
{
    unsigned int n = 0, gOfn = 0;
    while(scanf("%u", &n) == 1 && n != 0)
    {
        gOfn = n;
        while(gOfn > 9)
        {
            n = gOfn;
            gOfn = 0;
            while(n)
            {
                gOfn += (n%10);
                n /= 10;
            }
        }
        printf("%d\n", gOfn);
    }
    return 0;
}
