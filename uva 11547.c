#include<stdio.h>

int main()
{
    unsigned char t = '\0';
    int n = 0;

    scanf("%hhu", &t);
    while(t--)
    {
        scanf("%d", &n);

        n = (((n * 567 / 9) + 7492) * 235 / 47) - 498;
        if (n < 0) n = n * (-1);
        printf("%d\n", n/10%10);

    }
    return 0;
}
