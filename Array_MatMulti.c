/* #include<stdio.h>
void main (){
    int i,j,k,l,a[i][j],b[k][l],m,n,ans[j][k];
    printf("Enter the row and col number of MatA: ");
    scanf("%d,%d",&i,&j);
    printf("Enter the row and col number of MatB: ");
    scanf("%d,%d",&k,&l);
    for (m=0;m<i;m++){
        for (n=0;n<j;n++){
            scanf("%d",&a[m][n]);
            }
    }
    for (m=0;m<k;m++){
        for (n=0;n<l;n++){
            scanf("%d",&a[m][n]);
            }
    }


    
    for (m=0;m<j;m++){
        for (n=0;n<i;n++){
            ans[m][n]+=a[j][i]*b[i][j];
            }}

        for (m=0;m<j;m++){
        for (n=0;n<k;n++){
            printf("a[%d][%d] is %d\t",m+1,n+1,ans[m][n]);
            }printf("\n");
    }

}*/

#include<stdio.h>

void main (){
    int a[10][10],b[10][10],mul[10][10],i=0,j=0,k=0,sum=0;
    printf("Enter elements of Matrix A :\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            }
    }
    printf("Enter elements of Matrix B :\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&b[i][j]);
            }
    }
   for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
   {
    for (k=0;k<3;k++)
   {
    sum+=a[i][k]*b[k][j];
   }
   mul[i][j]=sum;
   sum=0;
   }
   }
   printf("Resultant Matrix :\n\n");
   for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",mul[i][j]);
            }printf("\n\n");
    }
   

}    