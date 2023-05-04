#include<stdio.h>
int r=0,c=0;
void disp();
void main()
{
    int a[r][c],i,j;
    printf("Enter the no fo row and column for a Matrix=");
    scanf("%d%d",&r,&c);
    printf("Enter the elemnts for  Matrxi=");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
     disp(a);

}
void disp(int a[r][c])
{   
    printf("\nMatrix is");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}