#include<stdio.h>

main()
{
	int i=1,n,factorial=1;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	
	do{
		
	factorial=factorial*i;
	i++;
	
	}while(i<=n);
		printf(" %d\n",factorial);
}
