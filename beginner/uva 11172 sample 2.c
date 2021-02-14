#include<stdio.h>
#include<inttypes.h>

int main()
{
    uint8_t t = 0;
    uint32_t a = 0, b = 0;

    scanf("%" SCNu8, &t);

    while(t--)
    {
        scanf("%" SCNu32 "%" SCNu32, &a, &b);
        if(a > b) printf(">\n");
        else if ( a < b) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
