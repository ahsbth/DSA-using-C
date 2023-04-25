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
    for(i=pos-1;i<=sz;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
}
void delete()
{
    int i,pos;
    printf("Enter the position for delete=");
    scanf("%d",p);
}