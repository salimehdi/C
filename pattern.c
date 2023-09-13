#include<stdio.h>
void intstopafter (int,int);
void main () 
{ int i,a;
   scanf("%d",&a);
    for (i=1;i<=a;i++)
    {intstopafter(i,a);}
    for (i=a-1;i>0;i--)
    {intstopafter(i,a);}
}
void intstopafter (int stopafter,int start)
{   int row,stop;
    for (row=1;row<=start;row++)
    {
        printf("%d ",start-row+1);
        if (row==stopafter)
        {   
            stop=start-row+1;
            break;
        }
    }
    row++;
    for (;row<=start;row++)
    {
        printf("%d ",stop);
        
    }
    for (row=2;row<=stop;row++)
    {
        printf("%d ",stop);
        
    }
    for (;row<=start;row++)
    {
        printf("%d ",row);
        
    }
   printf("\n");
}


// #include <stdio.h>

// int main() {
//     int n ;
//     scanf("%d",&n);
//     int arr[100][100];
    
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             arr[i][j] = n - (i < j ? i : j);
//         }
//     }

   
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         for (int j = n-2; j >= 0; j--) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = n-2; i >= 0; i--) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         for (int j = n-2; j >= 0; j--) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
