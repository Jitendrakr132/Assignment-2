#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if((n&1)==1)
        printf("odd number");
        else
            printf("Even number");
}
