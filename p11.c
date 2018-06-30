#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char s[1000];
 
  scanf("%s",s);
  a=strlen(s);
  for(i=a;i>=0;i--)
  {
    printf("%c",s[i]);
  }
  return 0;
}
