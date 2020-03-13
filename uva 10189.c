#include<stdio.h>
int main()
{
    unsigned short rows = 0, columns = 0, i = 0, j = 0, cnt = 1;
    char a[101][101];
    while(scanf("%hu %hu", &rows, &columns)== 2 && rows && columns)
    {
        if(cnt != 1) printf("\n");

        for(i = 0; i < rows; i++)
        {
            scanf("%s", a[i]);
        }
        for(i = 0; i < rows; i++)
        {
            for(j= 0; j < columns; j++)
            {
                if(a[i][j] == '.') a[i][j] = '0';
            }
        }
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < columns; j++)
            {
                if(a[i][j] == '*')
                {
                    if(i-1 >=0 && a[i-1][j] != '*')
                        a[i-1][j]++;
                    if(i+1 < rows && a[i+1][j] != '*')
                        a[i+1][j]++;
                    if(j-1 >=0 && a[i][j-1] != '*')
                        a[i][j-1]++;
                    if(j+1 < columns && a[i][j+1] != '*')
                        a[i][j+1]++;
                    if(i-1 >= 0 && j-1 >= 0 && a[i-1][j-1] != '*')
                        a[i-1][j-1]++;
                    if(i-1 >= 0 && j+1 < columns && a[i-1][j+1] != '*')
                        a[i-1][j+1]++;
                    if(i+1 < rows && j-1 >= 0 && a[i+1][j-1] != '*')
                        a[i+1][j-1]++;
                    if(i+1 < rows && j+1 < columns && a[i+1][j+1] != '*')
                        a[i+1][j+1]++;
                }
            }
        }
        printf("Field #%d:\n", cnt++);
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < columns; j++)
            {
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

