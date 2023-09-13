#include<stdio.h>

void main (){
    int a[3][3],i=0,j=0;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            }
    }

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("a[%d][%d] is %d\t",i+1,j+1,a[i][j]);
            }printf("\n");
    }

}