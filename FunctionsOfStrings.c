/*
strnlen(s1 ,s2 ,max-lim)
strncmp(s1 ,s2 ,comp-till)	
strncat(s1 ,s2 ,copy-this-much of s2 to s1 )	
strncpy(s1 ,s2 ,copy first this much to s1)	
strchr()	It finds out the first occurrence of a given character in a string.
strrchr()	It finds out the last occurrence of a given character in a string.
strstr()	It finds out the first occurrence of a given string in a string.
strnstr()	It finds out the first occurrence of a given string in a string where the search is limited to n characters.
strcasecmp()	It compares two strings without sensitivity to the case.
strncasecmp()	It compares n characters of one string to another without sensitivity to the case.*/

#include <stdio.h>
#include <string.h>

int main() {

  char s[30];
  gets(s);
  if (strstr(s,"orange")!='\0')
  {
    printf("Orange is there.");
  }
  else printf("Orange is not there.");
  
}