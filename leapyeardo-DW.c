#include<stdio.h>

main()

{
	int i=2000, n=3000;

   do	{
		if(i%4==0)
		{
			printf("%d  ",i);
		}
		i++;
	}		while(i<=n);
}
