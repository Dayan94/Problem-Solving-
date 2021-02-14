#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char i = 0;
    char a[100];
    while(scanf("%s",a) == 1)
    {
        for(i = 0; i < strlen(a); i++)
        {
            printf("%c", a[i] - 7);
        }
        printf("\n");
    }
    return 0;
}
