#include <stdio.h>
#include <string.h>

int main() 
{
   int i,j,a=5;
   for (i=1;i<=a;i++)
   { 
        
        
       
                for (j=1;j<=a;j++)
             {
                if(i>=j){printf("* ");}
             }printf("\n");
             printf(" ");



                for (j=1;j<=a;j++)
             {
                if(i>=j){printf("* ");}
             }printf("\n");





             if (i==a){
                for (j=0;j<=a;j++)
             {
                if(i>=j){printf("* ");}
             }printf("\n");}
     
   }
                for (i=a;i>0;i--)
                { printf(" ");

                     
                             for (j=1;j<=a;j++)
                          {  
                             if(i>=j){printf("* ");}
                          }printf("\n");



                             for (j=1;j<=a;j++)
                          {
                             if(i>=j){printf("* ");}
                          }printf("\n");

                }

    return 0;
}
