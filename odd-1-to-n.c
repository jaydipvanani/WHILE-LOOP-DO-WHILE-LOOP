#include<stdio.h>
 void main()
 {
 	int i=1,n;
 	printf("ENTER VALUE = ");
 	scanf("%d",&n);
 	 

    while (i <= n) {
        if (i % 2 == 1) { 
            printf("%d \n", i);
        }
        i++;
    }
    
    
    
 	
 	
 	return 0;
 }
