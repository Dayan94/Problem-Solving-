#include<stdio.h>

int main()
{
    char a[1000];
    unsigned short i = 0, j = 0;
    while(gets(a))
    {
        for(i = 0; ; i++)
        {
            if(a[i] == ' ' || a[i] == '\0')
            {
                for(j = i-1; a[j] != ' '; j--)
                {
                    printf("%c", a[j]);
                    if(j == 0)
                        break;
                }
                if(a[i] != '\0')
                    printf(" ");
            }
            if(a[i] == '\0')
                break;
        }
        printf("\n");
    }
    return 0;
}
