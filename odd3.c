#include<stdio.h>
main()
{
	int n1,n2,i;
	int count=0;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2!=0)
		{
		count++;
	    if(count!=3)
	    printf("%d ",i);
   	    }
}
}

