#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char s[1000];
    unsigned short i = 0, digits_sum = 0, degree = 0;
    while(scanf("%s", &s)== 1 && strcmp(s, "0"))
    {
        digits_sum = 0;
        for(i = 0; s[i]; i++)
        {
            digits_sum += (s[i] - '0');
        }
        if(digits_sum % 9 == 0)
        {
            printf("%s is a multiple of 9 and has 9-degree ", s);
            degree = 1;
            while(digits_sum > 9)
            {
                sprintf(s, "%d", digits_sum);
                digits_sum = 0;
                for(i = 0; s[i]; i++)
                {
                    digits_sum += (s[i] - '0');
                }
                degree++;
            }
            printf("%d.\n", degree);
        }
        else
            printf("%s is not a multiple of 9.\n", s);
    }
    return 0;
}
