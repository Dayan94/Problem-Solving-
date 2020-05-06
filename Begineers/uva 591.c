#include<stdio.h>

int main()
{
    unsigned char n = 0, i = 0, a[100];
    unsigned short int moves = 0, avg = 0, set = 0;

    while(scanf("%hhu", &n) == 1)
    {
        if(n== 0) break;

        avg = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%hhu", &a[i]);
            avg += a[i];
        }
        avg /= n;
        moves = 0;
        for(i = 0; i < n; i++)
        {
            if(a[i] <= avg) moves += (avg - a[i]);
            else moves += (a[i] - avg);
        }
        moves /= 2;
        printf("Set #%u\nThe minimum number of moves is %u.\n\n", ++set, moves);
    }
    return 0;
}

