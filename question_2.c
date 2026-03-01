#include <stdio.h>
int main()
{
    int i, j;
    int process = 5;
    int AT[5] = {0, 1, 2, 3, 4};
    int BT[5] = {5, 7, 6, 2, 4};
    int CT[5];
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            sum = sum + BT[i] ;
            CT[j++] = sum +2;
        }
        else
        {
            sum = sum + BT[i];
            CT[j++] = sum +2*(i+1);
        }
    }
    printf("Completion time:");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", CT[i]);
    }
    printf("\n");

    int TAT[5];
    for (i = 0; i < 5; i++)
    {
        TAT[i] = CT[i] - AT[i];
    }
    printf("Trun around time:");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", TAT[i]);
    }

    int WT[5];
    for (i = 0; i < 5; i++)
    {
        WT[i] = TAT[i] - BT[i];
    }
    printf("\n");
    printf("Wating Time:");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", WT[i]);
    }

    int sum_WT = 0;
    for (i = 0; i < 5; i++)
    {
        sum_WT = sum_WT + WT[i];
    }
    printf("\n");
    int avg_WT = sum_WT / 5;
    printf("Average waiting time:%d", avg_WT);

    return 0;
}