/*#include  <stdio.h>

int main(void)
{ int row ,col,a=9;
 //scanf("%d",&a);
   for (row=1;row<=a-1;row++)
    {
        for (col=1;col<=(a)-row;col++){
        printf("  ");}
        for (col=1;col<=row;col++){
        printf(" %d", col);}
        for (col=1;col<=row-1&!(row==1);col++)
        {printf(" %d",row-col);}
    printf("\n");
    }
 
 for (row=1;row<=a;row++)
 {
  for(col=1;col<=row-1;col++)
   {printf("  ");}
   for(col=a-row;col>=0;col--)
   {printf(" %d",a-col-row+1);}
     for(col=(a-1)-row;col>=0;col--)
   {printf(" %d",col+1);}
   printf("\n"); 
 }
 
 
}*/

//chat GTP

/*#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {
        for (j = 5 - i; j >= 1; j--) {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf(" *");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--) {
        for (j = 5 - i; j >= 1; j--) {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int row , col;
    for (row=1;row<=5;row++)
    {
        for (col=5-row;col>0;col--)
        {printf("  ");}
        for (col=1;col<=(2*row)-1;col++)
        {printf(" *");}
        printf("\n");
    }
    for (row=4;row>0;row--)
    {
        for(col=1;col<=5-row;col++)
        {printf("  ");}
        for(col=1;col<=2*row-1;col++)
        {printf(" *");}
        printf("\n");
    }
    return 0;
}
