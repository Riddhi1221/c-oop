#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,n,sum,neon;
	clrscr();
	printf("A=>");
	scanf("%d",&a);
	n=a*a;
	for(sum=0;n!=0;)
	{
		neon=n%10;
		sum=sum+neon;
		n=n/10;
	}
	//printf("%d\n ",sum);
	if(a == sum)
	{
		printf("neon no.");
	}
	else
	{
		printf("not neno no.");
	}
	getch();
}