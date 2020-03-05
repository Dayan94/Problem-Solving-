#include<stdio.h>

int main()
{
    unsigned char t = 0;
    unsigned int a = 0, b = 0;

    scanf("%hhu", &t);

    while(t--)
    {
        scanf("%u%u", &a, &b);
        if(a > b) printf(">\n");
        else if ( a < b) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
