#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter value  =");
	scanf("%d",&n);
	
	
	do{
		printf("%d x %d =%d\n",n,i,i*n);
		i++;
	}while(i<=10);
}
