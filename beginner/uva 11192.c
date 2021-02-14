#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char a[100], substr_range = 0, str_len = 0, range = 0;
    char i = 0, cnt = 1;
    while(scanf("%hhu", &substr_range) && substr_range != 0 && cnt != 102)
    {
        scanf("%s", a);
        str_len = strlen(a);
        substr_range = str_len / substr_range;
        for( range = substr_range; range <= str_len; range += substr_range)
        {
            for(i = range -1; i >= (range - substr_range); i--)
            {
                printf("%c", a[i]);
            }
        }
        printf("\n");
        cnt++;
    }
    return 0;
}
