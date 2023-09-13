// #include<stdio.h>
// int main () 
// {
// int  i=1,j=1,and_val=0,or_val=0,xor_val=0 ;
//     for(i=1;i<=5;i++)
//     {
//             for(j=1;j<=5;j++)
//         {
//             if(i<j){printf("%d %d\n",i,j);}
//         }
//     }
// return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int  i=1,j=1,and_val=0,or_val=0,xor_val=0,and_max=0,or_max=0,xor_max=0 ;
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n;j++)
        {
            if(i<j)
            {
                and_val=i&j; 
                or_val=i|j;         
                xor_val=i^j;  
            }
            if (and_val>and_max&&and_val<k)
            {and_max=and_val;}
            if (or_val>or_max&&or_val<k)
            {or_max=or_val;}
            if (xor_val>xor_max&&xor_val<k)
            {xor_max=xor_val;}
        }
    }
  printf("%d\n",and_max);
  printf("%d\n",or_max);
  printf("%d\n",xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


//Success