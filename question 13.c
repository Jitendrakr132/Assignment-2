#include<stdio.h>
int main()
{
    int x;
    int y,s;
    printf("Enter the number");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    s=y*100+x;
    printf("%d",s);

}
