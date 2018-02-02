#include <stdio.h>
int main(void)
{
int s;
printf("enter the num=");
scanf("%d",&s);
if((s%2==0)&&(s%3==0))
{
	printf("\nThe number %dis not prime:",s);
}
else
{
	printf("\nThe number %dis prime:",s)
  }
