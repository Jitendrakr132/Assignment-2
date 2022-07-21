#include<stdio.h>
#include<conio.h>
int main()
{
    int n,len,pos=0,i=0,count=0;
    printf("Enter the number");
    scanf("%d",&n);
    printf("\n Enter the lenth");
    scanf("%d",&len);
    while(i<=32)
    {
        if((n&1)==1)
        {
            count++;
            pos=i;
            if(count==len)
            {
                break;
            }
        }
        if((n&1)==0)
        {
            count=0;
        }
        n=n>>1;
        i++;
    }
    printf("position of %d\n",pos);
}
