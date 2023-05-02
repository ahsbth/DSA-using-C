#include<stdio.h>
int main()
{   
    int arr[5],i;
    void disp();
    printf("Enter the elements for array=");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    disp(arr,5);
    return 0;
}
void disp(int arr[],int s)
{  int i;
    for(i=0;i<s;i++)
    {
        printf("%d\t",arr[i]);
    }
}