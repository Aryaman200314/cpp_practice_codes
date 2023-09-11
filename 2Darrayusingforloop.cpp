#include<iostream>
int main()
{
    int nums[4][3];
    int j,i;
    for (i = 0; i < 4 ; i++)
{    for (j =0 ; j < 3 ; j++)
    {
        scanf("%d", &nums[i][j]);
    }
}


printf("$$$$$ \n");

    for (i = 0; i < 4 ; i++)
{    for (j =0 ; j < 3 ; j++)
    {
        printf("%d ", nums[i][j]);
    }
    printf("\n"); 
}
    return 0;
}

 