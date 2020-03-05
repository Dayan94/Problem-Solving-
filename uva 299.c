#include<stdio.h>

int main()
{
    unsigned int N = 0, L = 0, a[50], i = 0, j = 0, S = 0;
    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &L);
        for(i = 0; i < L; i++)
        {
            scanf("%d",&a[i]);
        }
        S = 0;
        for(i = 0; i < L-1; i++)
        {
            for(j = 0; j < L - i-1; j++)
            {
                if(a[j] > a[j+1])
                {
                    S++;
                    a[j] = a[j] ^ a[j+1];
                    a[j+1] = a[j] ^ a[j+1];
                    a[j] = a[j] ^ a[j+1];
                }

            }
        }
        printf("Optimal train swapping takes %d swaps.\n", S);
    }
}
