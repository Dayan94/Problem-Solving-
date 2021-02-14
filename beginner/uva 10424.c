#include<stdio.h>
int main()
{
    unsigned char a[25], b[25];
    unsigned short i = 0, ratio1 = 0, ratio2 = 0;
    while(gets(a))
    {
        gets(b);
        ratio1 = 0, ratio2 = 0;
        for(i = 0; a[i]; i++)
        {
            if(a[i] >= 'A' && a[i] <= 'Z') a[i] = a[i] - 'A' + 'a';
            if(a[i] >= 'a' && a[i] <= 'z')
                ratio1 += a[i] - 'a' + 1;
        }
        for(i = 0; b[i]; i++)
        {
            if(b[i] >= 'A' && b[i] <= 'Z') b[i] = b[i] - 'A' + 'a';
            if(b[i] >= 'a' && b[i] <= 'z')
                ratio2 += b[i] - 'a' + 1;
        }

        while(ratio1 > 9)
        {
            sprintf(a, "%d", ratio1);
            ratio1 = 0;
            for(i = 0; a[i]; i++)
                ratio1 += a[i] - '0';
        }

        while(ratio2 > 9)
        {
            sprintf(b, "%d", ratio2);
            ratio2 = 0;
            for(i = 0; b[i]; i++)
                ratio2 += b[i] - '0';
        }
        if(ratio1 > ratio2)
            printf("%.2lf %%\n", (double) ratio2 / (double) ratio1 * 100);

        else
            printf("%.2lf %%\n", (double) ratio1 / (double) ratio2 * 100);

    }
    return 0;
}
