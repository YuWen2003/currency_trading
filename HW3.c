#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time, my_price;
    scanf("%d %d", &time, &my_price);
    int price[time];
    for (int i = 0; i < time; i++)
    {
        scanf("%d", &price[i]);
    }
    int x = 0;
    for (int i = 1; i < (1 << time); i++)
    {
        int result[time];
        int size = 0;
        int sum = 0;
        for (int j = 0; j < time; j++)
        {
            if ((i >> j) & 1)
            {
                result[size++] = price[j];
                sum += price[j];
            }
        }
        if (sum == my_price)
        {
            for (int j = 0; j < size; j++)
            {
                printf("%d ",result[j]);
            }
            printf("\n");
            x = 1;
        }
    }

    if (x==0)
    {
        printf("NO\n");
    }

    return 0;
}