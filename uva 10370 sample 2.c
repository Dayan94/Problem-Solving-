#include <stdio.h>

int main()
{
    double avg = 0, navg = 0; 
    unsigned int t = 0;
    unsigned short n = 0, i = 0;
    unsigned char a[1001]; 
    
    scanf("%u", &t);
    
    while(t--)
    {
        avg = 0;
        scanf("%hu", &n);
        for(i = 0;i < n; i++)
        {
            scanf("%hhu", &a[i]);
            avg += a[i];
        }
        avg/=n;
        
        navg = 0; 
        for(i = 0; i < n; i++)
        {
            if(a[i] > avg) navg++;
        }
        
        printf("%.3lf%%\n", navg/n * 100);
    }
    
    return 0; 
}
