
#include<stdio.h>
#include<conio.h>
int gcd(int, int);
int main() {
int a, b;
clrscr();
printf(“Experiment no. 11\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter two numbers: ”);
scanf(“%d %d”, &a, &b);
printf(“The GCD of the numbers is %d”, gcd(a, b));
getch();
return 0;
}
int gcd(int n1, int n2) {
if (n2 != 0)
return gcd(n2, n1 % n2);
else
return n1;
}


/*



#include<stdio.h>
#include<conio.h>
int main() {
int a[20], n, i, j, min, max;
clrscr();
printf(“Experiment no. 12\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter the number of inputs: ”);
scanf(“%d”, &n);
printf(“\nEnter the numbers: ”);
for (i = 0; i < n; i++)
scanf(“%d”, &a[i]);
min = max = a[0];
for (i = 0; i < n; i++) {
if (a[i] < min)
min = a[i];
if (a[i] > max)
max = a[i];
}
printf(“\nThe largest of the given number is %d”, max);
printf(“\nThe smallest of the given number is %d”, min);
getch();
return 0;
}






#include<stdio.h>
#include<conio.h>
int main() {
int a[20][20], b[20][20], c[20][20], m, n, p, q, i, j, k;
clrscr();
printf(“Experiment no. 13\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter the number of rows and columns of the first matrix: ”);
scanf(“%d %d”, &m, &n);
printf(“\nEnter the number of rows and columns of the second matrix: ”);
scanf(“%d %d”, &p, &q);
if (n != p)
printf(“\nMultiplication is not possible.”);
else {
printf(“\nEnter the elements of matrix A:\n”);
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
scanf(“%d”, &a[i][j]);
printf(“\nEnter the elements of matrix B:\n”);
for (i = 0; i < p; i++)
for (j = 0; j < q; j++)
scanf(“%d”, &b[i][j]);
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
c[i][j] = 0;
for (k = 0; k < n; k++)
c[i][j] += a[i][k] * b[k][j];
}
}
printf(“\nThe multiplication matrix:\n”);
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++)
printf(“%d ”, c[i][j]);
printf(“\n”);
}
}
getch();
return 0;
}







#include<stdio.h>
#include<conio.h>
int main() {
int a[20], n, i, loc;
clrscr();
printf(“Experiment no. 14\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter the number of inputs: ”);
scanf(“%d”, &n);
printf(“\nEnter the numbers: ”);
for (i = 0; i < n; i++)
scanf(“%d”, &a[i]);
printf(“Enter the index of the number you want to delete: ”);
scanf(“%d”, &loc);
if (loc >= n)
printf(“\nCannot delete the element.”);
else {
for (i = loc-1; i < n; i++)
a[i] = a[i+1];
printf(“Array after deleting the element: ”);
for (i = 0; i < n - 1; i++)
printf(“%d ”, a[i]);
}
getch();
return 0;
}






#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
char str[20];
int i = 0, n;
clrscr();
printf(“Experiment no. 15\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter a string: ”);
gets(str);
n = udstrlen(str);
while(str[i] == str[n – i – 1] && i < n) {
i++;
}
if (i == n)
printf(“\nThe entered string is a palindrome.”);
else
printf(“\nThe entered string is not a palindrome.”);
getch();
return 0;
}







#include<stdio.h>
#include<conio.h>
int main() {
char s[100], *ptr, ch = 0, w = 1, l = 1;
clrscr();
printf(“Experiment no. 16\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter a paragraph: ”);
scanf(“%[^*]”, s);
ptr = s;
while (*ptr != ‘\0’) {
ch++;
if (*ptr == ‘ ’ || *ptr == ‘\t’)
w++;
if (*ptr == ‘\n’)
l++;
ptr++;
}
printf(“\nThe sentence has %d characters, %d words and %d lines”, ch, w, l);
getch();
return 0;
}






#include<stdio.h>
#include<conio.h>
void swap(int, int);
int main() {
int a, b;
clrscr();
printf(“Experiment no. 17\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter two numbers: ”);
scanf(“%d %d”, &a, &b);
printf(“Before swapping: a is %d and b is %d”, a, b);
swap(a, b);
printf(“After swapping: a is %d and b is %d”, a, b);
getch();
return 0;
}
void swap(int x, int y) {
int temp = x;
x = y;
y = temp;
printf(“In swapping function: a is %d and b is %d”, x, y);
}






#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
int main() {
int a, b, *p1, *p2;
clrscr();
printf(“Experiment no. 17\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter two numbers: ”);
scanf(“%d %d”, &a, &b);
p1 = &a;
p2 = &b;
printf(“\nBefore swapping: a is %d and b is %d”, a, b);
swap(p1, p2);
printf(“\nAfter swapping: a is %d and b is %d”, a, b);
getch();
return 0;
}
void swap(int* x, int* y) {
int temp = *x;
*x = *y;
*y = temp;
printf(“\In swapping function: a is %d and b is %d”, x, y);
}






#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
char str[100], *ptr;
int length = 0;
clrscr();
printf(“Experiment no. 18\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter a string: ”);
gets(str);
ptr = str;
while(*ptr != ‘\0’) {
length++;
ptr++;
}
printf(“The length of the entered string is %d”, length);
getch();
return 0;
}






#include<stdio.h>
#include<conio.h>
int main() {
int a[10], b[10], *p1, *p2, n, i;
clrscr();
printf(“Experiment no. 19\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter the number of elements: ”);
scanf(“%d”, &n);
for (i = 0; i < n; i++)
scanf(“%d”, &a[i]);
p1 = a;
p2 = b;
i = 0;
while(i < n) {
*p2 = *p1;
p1++;
p2++;
i++;
}
printf(“\nCopied array: ”);
for (i = 0; i < n; i++)
printf(“%d ”, b[i]);
getch();
return 0;
}





#include<stdio.h>
#include<conio.h>
int main() {
char s1[50], s2[50], *p1, *p2;
clrscr();
printf(“Experiment no. 20\n”);
printf(“Ali Mehdi Syed\n”);
printf(“Enter first string: ”);
gets(s1);
printf(“\nEnter second string: ”);
gets(s2);
p1 = s1;
p2 = s2;
while (*p1 != ‘\0’ && *p2 != ‘\0’) {
if (*p1 != *p2)
break;
p1++;
p2++;
}
if (*p1 == ‘\0’ && *p2 == ‘\0’)
printf(“\nBoth the strings are same”);
else
printf(“\nBoth the strings are different”);
getch();
return 0;
}
*/