#include<stdio.h>

int main()
{
    unsigned int t = 0, a = 0, b = 0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a/3) * (b/3));
    }
    return 0;
}

