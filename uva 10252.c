#include<stdio.h>
int main()
{
    unsigned char string1[1000], string2[1000];
    unsigned short i = 0, j = 0;
    while(gets(string1))
    {
        unsigned short cnt1[128] = {0}, cnt2[128] = {0};
        for(i = 0; string1[i]; i++)
            cnt1[string1[i]]++;

        gets(string2);

        for(i = 0; string2[i]; i++)
            cnt2[string2[i]]++;

        for(i = 0; i < 128; i++)
            for(j = 1; j <= cnt1[i] && j <= cnt2[i]; j++)
                printf("%c", i);

        printf("\n");
    }
    return 0;
}

