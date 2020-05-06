#include<stdio.h>

int main()
{
    int n = 0, m = 0, areas_m[100];

    while(scanf("%d", &n) == 1 && n)
    {
        int m = 1;

        while(1)
        {
            int areas_power_off[100] = {0}, i = 2, count_m = 0, count_n = 0;
            char found = 0;

            while(count_n != n)
            {
                if(areas_power_off[i] == 0)
                {
                    count_m++;
                    if(count_m % m == 0)
                    {
                        count_m = 0;
                        areas_power_off[i] = 1;
                        count_n++;

                        if(areas_power_off[13] == 1)
                        {
                            if(count_n == n - 1)
                            {
                                found = 1;
                            }
                            break;
                        }
                    }
                }

                i++;
                if(i > n)
                    i = 2;

            }
            if(found == 1)
            {
                printf("%d\n", m);
                break;
            }
            else
                m++;
        }

    }
    return 0;
}
