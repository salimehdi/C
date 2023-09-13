#include<stdio.h>
struct bio{
    int age;
    char ref[100];
    char line[100];
};
int main () 
{
struct bio  i  ;
int j,n;
 scanf("%d",&j );
   for(n=0;n<j;n++){
    scanf("%d",&i.age );
    scanf("%s",&i.ref );
    scanf("\n");
    scanf("%[^\n]",i.line );}
    for(n=0;n<j;n++){
    printf("Age %d\n",i.age );
    printf("Ref. no. %s\n",i.ref );
    printf("LINE: %s\n",i.line );}
return 0;
}