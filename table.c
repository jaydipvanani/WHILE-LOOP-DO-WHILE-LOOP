#include<stdio.h>

main()
{
	int i=1,n,multi=1;
	
	printf("Enter value  =");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("%d x %d =%d\n",n,i,i*n);
		i++;
	}
}
