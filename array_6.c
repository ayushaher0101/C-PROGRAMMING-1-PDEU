#include<stdio.h>
void main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Enter matrix A 3x3 : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    printf("Enter matrix B 3x3 : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        c[i][j]=a[i][j]*b[i][j];

    printf("Matrix c 3x3 : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        printf("%d\n",c[i][j]);
}
