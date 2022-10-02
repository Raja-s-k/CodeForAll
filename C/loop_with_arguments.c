#include<stdio.h>
void forloop ();
void forloop (int no)
{
int a;
for(a=no;a<=no*10;a=a+no)
{
printf("\n%d",a);
}
}
int main ()
{
int c;
printf("enter your number=");
scanf("%d",&c);
forloop (c);
return 0;
}