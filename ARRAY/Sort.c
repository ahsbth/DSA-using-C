#include<stdio.h>
void display();
void bubble();
void selection();
void insertion();
void main()
{
int a[10],i,ch;
printf("Enter 10 nos for array=");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(;;)
{
printf("\n1 for Dispaly");
printf("\n2 for Bubble Sort");
printf("\n3 for Selection Sort");
printf("\n4 for Insertion Sort");
printf("\n5 for Exit from Program");
printf("\nEnter  your choice=");
scanf("%d",&ch);
switch(ch)
{   case 1:display(a,10);
             break;
    case 2:bubble(a,10);
            break;
    case 3:selection(a,10);
             break;
    case 4:insertion(a,10);
             break;
    case 5:exit(0);
             break;
    default:printf("Invalid choice");
}

}
}
void display(int a[],int s)
{
    int i;
    printf("\n Array is");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
}
void bubble(int a[],int s)
{
    int i,j,temp;
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selection(int a[],int s)
{
    int i,j,temp;
    for(i=0;i<s;i++)
    {
        for(j=1;j<s;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void insertion(int a[],int s)
{
        for (int i = 1; i < s; ++i) {
            int key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
}
}