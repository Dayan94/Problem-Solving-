#include<stdio.h>

int main()
{
    int n = 0;
    unsigned char a[20], length = 0;
    while(scanf("%d", &n) == 1 && n >= 0)
    {
        if(n == 0)
            printf("0");
        else
        {
            length = 0;
            while(n)
            {
                a[length++] = n % 3;
                n /= 3;
            }
            while(length--)
            {
                printf("%d", a[length]);
            }
        }
        printf("\n");
    }
    return 0;
}
