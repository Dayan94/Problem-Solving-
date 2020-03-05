#include<stdio.h>

int main()
{
    unsigned char test_case = '\0', farmers = '\0';
    unsigned int premium = 0, farmyard_size = 0, animals = 0, environment_friendliness = 0;

    scanf("%hhu", &test_case);

    while(test_case--)
    {

        scanf("%hhu", &farmers);
        premium = 0;
        while(farmers--)
        {
            scanf("%d", &farmyard_size);
            scanf("%d", &animals);
            scanf("%d", &environment_friendliness);
            premium += (farmyard_size * environment_friendliness);
        }
        printf("%d\n", premium);
    }
}
