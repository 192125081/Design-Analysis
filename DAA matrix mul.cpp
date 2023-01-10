#include<stdio.h>
int main()
{
    int mat1[2][2],mat2[2][2],i,j,mat3[2][2];
    printf("enter the elements of 1 matrix:");
    for(i=0;i<2;i++)
    {
	   for(j=0;j<2;j++)
	   scanf("%d",&mat1[i][j]);
    }
    printf("enter the elements of 2 matrix:");
    for(i=0;i<2;i++)
    {
	    for(j=0;j<2;j++)
	    scanf("%d",&mat2[i][j]);
    }
    printf("\nadding the elements of two matrix:");
    for(i=0;i<2;i++)
    {
	    for(j=0;j<2;j++)
	    mat3[i][j]=mat1[i][j]*mat2[i][j];
	    printf(" ",mat3);
    }
    printf("\nsum of the elements of 2 matrix:");
    for(i=0;i<2;i++)
    {
	    for(j=0;j<2;j++)
	    printf("\n %d",mat3[i][j]);
    }
    return 0;
}
