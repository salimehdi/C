//2. Find the sum of natural numbers using Recursion
#include<stdio.h>
int sumofnatural(int);
int main () 
{
int  n  ;
scanf("%d",&n);
    printf("%d",sumofnatural(n));
return 0;
}
int sumofnatural(int n)
{
    int sum=0;
    if(n>1){
    sum+=sumofnatural(n-1);
    }
    else{return 1;}
    return sum;
}