#include<iostream>
int main()
{
    char word[100] = "this is good";
    int len = 0 , i = 0 , cnt = 0;
    while (word[i] != '\0')   // NULL condition
    {

        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
        {
            cnt ++;
        }
        i++;
        len ++;
    }
    printf("%d is the number of vowels in the given string\n" , cnt);
    printf("%d is the length of the given string \n" , len);
    return 0;
}