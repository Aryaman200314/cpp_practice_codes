#include<iostream>
int main()
{
    char test[100] = "This is good!!";
    int len = 0;
    int i = 0;      // loop control variable 
    while (test[i] != '\0') // jb tk humara string not null hai tb tk hum 
                            // isko run krre gye '\0' isks mtlb NULL hota hai
    {
        len++;
        i ++;
    }
    printf(" %d \n", len);
    return 0;
}