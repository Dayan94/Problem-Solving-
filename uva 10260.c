#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    unsigned char i = 0, l = 0;
    while(scanf("%s", s) == 1)
    {
        l = strlen(s);
        for(i = 0; i <= l; i++)
        {
            if(i == l) printf("\n");

            else if((s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V') && (s[i+1] != 'B' && s[i+1] != 'F' && s[i+1] != 'P' && s[i+1] != 'V'))
                printf("1");
            else if((s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z') && (s[i+1] != 'C' && s[i+1] != 'G' && s[i+1] != 'J' && s[i+1] != 'K' && s[i+1] != 'Q' && s[i+1] != 'S' && s[i+1] != 'X' && s[i+1] != 'Z'))
                printf("2");
            else if((s[i] == 'D' || s[i] == 'T') && (s[i+1] != 'D' && s[i+1] != 'T'))
                printf("3");
            else if(s[i] == 'L' && s[i+1] != 'L')
                printf("4");
            else if((s[i] == 'M' || s[i] == 'N') && (s[i+1] != 'M' && s[i+1] != 'N'))
                printf("5");
            else if(s[i] == 'R' && s[i+1] != 'R')
                printf("6");
        }
    }
    return 0;
}
