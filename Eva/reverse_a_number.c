#include <stdio.h>
int main()
{
    printf("Enter a number\n");
    int a, rem, tens, reverse = 0;
    scanf("%d", &a);
    for (int i = a; a != 0; a = (a/10))
    {
        rem = a % 10;
        reverse = (reverse * 10) + rem;
    }
    
    printf("The reverse number is %d\n", reverse);
    return 0;
}