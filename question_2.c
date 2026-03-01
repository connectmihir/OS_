#include <stdio.h>

int main()
{
    int i;
    int n = 5;

    int AT[5] = {0, 1, 2, 3, 4};  
    int BT[5] = {5, 7, 6, 2, 4};  

    int CT[5];   
    int TAT[5];  
    int WT[5];   

    int sum = 0;
    int context_switch = 2;  
    for (i = 0; i < n; i++)
    {
        sum = sum + BT[i];

        if (i == 0)
            CT[i] = sum;  
        else
            CT[i] = sum + context_switch * i;
    }

    printf("Completion Time:\n");
    for (i = 0; i < n; i++)
        printf("%d ", CT[i]);

    for (i = 0; i < n; i++)
        TAT[i] = CT[i] - AT[i];

    printf("\nTurnaround Time:\n");
    for (i = 0; i < n; i++)
        printf("%d ", TAT[i]);

    
    for (i = 0; i < n; i++)
        WT[i] = TAT[i] - BT[i];

    printf("\nWaiting Time:\n");
    for (i = 0; i < n; i++)
        printf("%d ", WT[i]);

    
    int sum_WT = 0;
    for (i = 0; i < n; i++)
        sum_WT += WT[i];

    float avg_WT = (float)sum_WT / n;

    printf("\nAverage Waiting Time: %.2f\n", avg_WT);

    return 0;
}
