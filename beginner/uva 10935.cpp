#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
    queue<int> cards;
    unsigned char n  = 0, i = 0;
    while(scanf("%hhu", &n) == 1)
    {
        if(n == 0)
            break;

        else
        {
            for(i = 1; i <= n; i++)
            {
                cards.push(i);
            }
            printf("Discarded cards:");
            while(cards.size() > 1)
            {
                printf(" %d", cards.front());
                cards.pop();
                cards.push(cards.front());
                cards.pop();

                if(cards.size() > 1)
                    printf(",");
            }
            printf("\nRemaining card: %d\n", cards.front());
            cards.pop();
        }
    }
    return 0;
}
