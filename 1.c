#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>0 && n<100000)
{
printf("Positive");
}
 else if(n<0)
{
printf("Negative");
}
else
{
printf("Zero");
}
 return 0;
}
