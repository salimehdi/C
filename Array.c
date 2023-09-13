#include<stdio.h>


int main()
{
    int a[9],i,temp=0,count=1;
 

    for(i=0;i<9;i++)
   { scanf("%d",&a[i]);}
   
   while (!(count==0))
   { count=0;
   for (i=0;i<9;i++)
   {
    if (a[i]>a[i+1])
    {   count++;
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
   }}
   for(i=0;i<9;i++)
   { printf("%d",a[i]);}
   
   return 0;

}

