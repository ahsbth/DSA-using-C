#include<stdio.h>
#include<stdlib.h>
#define N 10

void display();
void insert();
void delete();
void sort();
void search();
void main()
{
    
    int sz,ch,i;
    printf("Enter the size of arry=");
    scanf("%d",&sz);
    int arr[sz];
    printf("Enter the %d elements for arry  ",sz);
    for(i=0;i<sz;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(1)
    {
    printf("\n press 1 for display");
    printf("\n press 2 for insert");
    printf("\n press 3 for Delete");
    printf("\n press 4 for Sort");
    printf("\n press 5 for Search");
    printf("\n press 6 for exit");
    printf("Enter your choice=");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:display(arr,sz);
                  break;
        case 2:insert(arr,sz);
                  break;
        case 3:delete(arr,sz);
                  break;
        case 4:sort(arr,sz);
                  break;
        case 5:search(arr,sz);
                  break;
        case 6:exit(0);
                  break;
        default:printf("\ninvalid choice\n");
    }

}
}
void display(int arr[],int s)
{
  int i;
  printf("\nArray elements \n");
  for(i=0;i<s;i++)
  {
    printf("%d\t",arr[i]);
  }  
}
void insert(int arr[],int s)
{
    int i,pos,ele;
    printf("Enter the position and elements that you want to insert=");
    scanf("%d%d",&pos,&ele);
    for(i=s-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
}
void delete(int arr[],int s)
{   
    int i,pos;
    printf("Enter the position for delete=");
    scanf("%d",&pos);
    if(pos>=s+1)
    {
        printf("Deletion is not possible");
    }
    else
    {
      for (i=pos-1;i<s-1;i++)  
        {  
            arr[i] = arr[i+1];
        }  
    } 
    display(arr,s);
}
void sort(int arr[],int s)
{
    int i,j,temp;
    for(i=0;i<s;i++)
    {
        for(j=1;j<s;j++)
        {   
            if(arr[i]>arr[j])
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    display(arr,s);
}
void search(int arr[],int s)
{
    int i,f=0,n;
    printf("Enter the no for search in array=");
    scanf("%d",&n);
    for(i=0;i<s;i++)
    {
        if(arr[i]==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("no is found in given array");
    }
    else
    {
       printf("no is not found in given array"); 
    }
}