#include<stdio.h>
#include<string.h>

struct id {
    int ref;
    char name[10];
    int age;
};

int main () {
    struct id i[10],temp;
    int a,c,count=1;

    printf("Enter No. of Itrations: ");
    scanf("%d", &a);

    for (c=0; c<a; c++) {
        printf("Enter Ref of %d : ",c+1);
        scanf("%d", &i[c].ref);
        printf("Enter Name of %d : ",c+1);
        scanf("%s",i[c].name);
        printf("Enter Age of %d : ",c+1);
        scanf("%d", &i[c].age);
    }

    while(count!=0){
        count=0;
        for(c=0;c<a;c++){
            if (i[c].age>i[c+1].age){
                temp=i[c];
                i[c]=i[c+1];
                i[c+1]=temp;
                count++;
            }
        }
    }
    printf("Sorting As per Age:");

    for (c=1; c<=a; c++) {
        printf("Ref of %d : ",c);
        printf("%d\n", i[c].ref);
        
    }
    for (c=1; c<=a; c++) {
        
        printf("Name of %d : ",c);
        printf("%s\n", i[c].name);
        
    }
    for (c=1; c<=a; c++) {
        
        printf("Age of %d : ",c);
        printf("%d\n", i[c].age);
    }

    return 0;
}
