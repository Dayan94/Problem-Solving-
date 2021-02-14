#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char a[200], i = 0, b[200], l = 0;
    short cnt = 0;
    unsigned int n = 0;
    scanf("%u", &n);
    getchar();
    while(n--)
    {
        cnt = 0;
        gets(a);

        for( i = 0; a[i]; i++)
        {
            if(a[i] != '(' && a[i] != '[' && a[i] != ')' && a[i] != ']')
                continue;
            if((a[i] == ')' || a[i] == ']') && cnt == 0)
            {
                cnt = -1;
                break;
            }
            else if((a[i] == ')' && b[cnt-1] != '(') || (a[i] == ']' && b[cnt-1] != '['))
            {
                cnt = -1;
                break;
            }
            else if((a[i] == '(' || a[i] == '['))
                b[cnt++] = a[i];
            else if(a[i] == ']' && cnt > 0 && b[cnt - 1] == '[')
                cnt--;
            else if(a[i] == ')' && cnt > 0 && b[cnt - 1] == '(')
                cnt--;
        }

        if(cnt == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}


