#include<stdio.h>

main()
{
	int i=1,n,factorial=1;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	while(i<=n)
	{
		
	factorial=factorial*i;
	i++;
	}
		printf(" %d\n",factorial);
}
