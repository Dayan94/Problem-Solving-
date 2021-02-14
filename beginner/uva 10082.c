#include<stdio.h>
int main()
{
    unsigned char a[][14] =
    {
        {
            '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='
        },
        {
            'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\'
        },
        {
            'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\''
        },
        {
            'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'
        }
    }, b[500] = {0}, i = 0, j = 0, k = 0;
    while(gets(b))
    {
        for(i = 0; b[i]; i++)
        {
            if(b[i] == ' ')
                printf(" ");
            else
            {
                for(j = 0; j < 4; j++)
                {
                    for(k = 0; k < 14; k++)
                    {
                        if(a[j][k] == b[i])
                            printf("%c", a[j][k-1]);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
