#include <stdio.h>

int main()
{
    unsigned int n_line = 0;
    unsigned long sum_last_3_numbers = 0;
    
    while(scanf("%u", &n_line) == 1)
    {
        sum_last_3_numbers = 0;
        
        while(n_line >= 3)
        {
            sum_last_3_numbers += (2 * n_line);
            n_line -= 2;
        }
        sum_last_3_numbers++;
        
        printf("%lu\n", 3 * sum_last_3_numbers - 6);
    }

    return 0;
}
