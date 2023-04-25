#include<stdio.h>
#define N 10
void main()
{
    int sz,i;
    int arr[sz],ch;
    printf("Enter the size of arry=");
    scanf("%d",&sz);
    printf("Enter the  elements for arry of size %d",sz);
    for(i=0;i<sz;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n press 1 for display");
    printf("\n press 2 for insert");
    printf("\n press 3 for Delete");
    printf("\n press 4 for Sort");
    printf("\n press 5 for Search");
    printf("\n press Any for Exit");
    printf("Enter your choice=");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:display();
        break;
        case 2:insert();
        break;
        case 3:delete();
        break;
        case 4:sort();
        break;
        case 5:search();
        break;
        default:exit(0);
    }

}
void display()
{
  int i;
  printf("\nArray elements \n");
  for(i=0;i<sz;i++)
  {
    printf("%d\t",arr[i]);
  }  
}
void insert()
{
    int i,pos,ele;
    printf("Enter the position and elements that you want to insert=");
    scanf("%d%d",&p,&ele);
    for(i=sz-1;i>=pos--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
}
void delete()
{   
    int i,pos;
    printf("Enter the position for delete=");
    scanf("%d",pos);
    if(pos>==sz+1)
    {
        printf("Deletion is not possible");
    }
    else
    {
      for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
    } 
    display();
}
void sort()
{
    int i,j,temp;
    for(i=0;i<sz;i++)
    {
        for(j=1;j<sz;j++)
        {   
            if(arr[i]>arr[j])
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    display();
}
void search()
{
    int i,p=0,n;
    printf("Enter the no for search in array=");
    scanf("%d",&n);
    for(i=0;i<sz;i++)
    {
        if(arr[i]==n)
        {
            p=1;
            break;
        }
    }
    if(p==1)
    {
        printf("no is found in given array");
    }
    else
    {
       printf("no is not found in given array"); 
    }
}