#include<stdio.h>

int main()
{
    int initial_cola = 0;
    int total_cola = 0;

    while(scanf("%d", &initial_cola)== 1)
    {
        total_cola = initial_cola;
        while(initial_cola >= 3)
        {
            total_cola += (initial_cola / 3);
            initial_cola = initial_cola / 3 + initial_cola % 3;
        }
        if(initial_cola == 2) total_cola++;
        printf("%d\n", total_cola);
    }
    return 0;
}
