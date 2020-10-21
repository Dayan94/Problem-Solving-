#include<stdio.h>

int main()
{
    unsigned int cgrts = 0, bts = 0, total;

    while(scanf("%u %u", &cgrts, &bts) == 2)
    {
        total = cgrts;
        while(cgrts >= bts)
        {
            total += cgrts / bts;
            cgrts = cgrts / bts + cgrts % bts;
        }
        printf("%d\n", total);
    }
    return 0;
}
