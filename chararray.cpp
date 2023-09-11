#include<iostream>
int main()
{
    char word[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%c",&word[i]);
    }
     for(i=0;i<3;i++)
    {
        printf("%c",word[i]);
    }
    return 0;

};