#include<iostream>
int main()
{
    int nums[4][3];
    int j;
    for (j =0 ; j < 3 ; j++)
    {
        scanf("%d", &nums[0][j]);
    }

     for (j =0 ; j < 3 ; j++)
    {
        scanf("%d", &nums[1][j]);
    }

     for (j =0 ; j < 3 ; j++)
    {
        scanf("%d", &nums[2][j]);
    }

     for (j =0 ; j < 3 ; j++)
    {
        scanf("%d", &nums[3][j]);
    }



       for (j =0 ; j < 3 ; j++)
    {
        printf("%d", nums[0][j]);
    }
    printf("\n");

    for (j =0 ; j < 3 ; j++)
    {
        printf("%d", nums[1][j]);
    }

    printf("\n");
     for (j =0 ; j < 3 ; j++)
    {
        printf("%d", nums[2][j]);
    }
    printf("\n");
     for (j =0 ; j < 3 ; j++)
    {
        printf("%d", nums[3][j]);
    }

    printf("\n");

    return 0;
}