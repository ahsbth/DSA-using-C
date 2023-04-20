#include<stdio.h>
void main()
{
    int mat[2][3],i,j,n,p=0;
    printf("Enter the elements of matrix=");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nMatrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Enter digit for Search in Matrix=");
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(n==mat[i][j])
            {
                p=1;
                break;
            }
        }
    }
    if(p==1)
    {
        printf("%d is found",n);
    }
    else{
       printf("%d is not found",n);
    }
}