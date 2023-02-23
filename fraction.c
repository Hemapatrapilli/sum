#include<stdio.h>
main()
{
	int n;
	float i,sum;
	sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	sum=sum+(1/i);
	}
	printf("%.4f",sum);
	
}
