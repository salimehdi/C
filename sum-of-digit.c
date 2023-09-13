#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;
int areaf(int x , int y , int z){
   int area,p;
   p=(x+y+z)/2;
   area = sqrt(p*(p-x)*(p-y)*(p-z));
   return area;
}


int main()
{
	int n,area[1000],i,count=1,temp;
	scanf("%d", &n);
	triangle tr[10000];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	
    for (i=0;i<=n;i++){
        area[i]= areaf(tr[i].a,tr[i].b,tr[i].c);
    } 
    
    while (count!=0){
        count=0;
        for(i=0;i<=n;i++)
        {
            if(area[i]>area[i+1]){
                temp=tr[i].a;
                tr[i].a=tr[i+1].a;
                tr[i+1].a=temp;
                temp=tr[i].b;
                tr[i].b=tr[i+1].b;
                tr[i+1].b=temp;
                temp=tr[i].c;
                tr[i].c=tr[i+1].c;
                tr[i+1].c=temp;
                count++;
            }
        }
    }

	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
    printf(
        "end"
    );
	return 0;
}