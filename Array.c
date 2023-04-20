#include<stdio.h>
void main()
{
    int a[5],i,n,p=0,pos;
    printf("Enter the elemnts in Array=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENter the no that you want to search=");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            p=1;
            break;
            pos=i+1
        }
        if(p==1)
    {
        printf(" %d is found at position=%d",n,pos);
    }
    }
    
}
