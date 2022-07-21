#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the two number");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swap number %d and %d",a,b);

}
