#include<stdio.h>
 void main()
 {
 	int i,n;
 	printf("ENTER VALUE = ");
 	scanf("%d",&n);
 	 i=n;

    while (i >= 1) {
        if (i % 2 == 0) { 
            printf("%d \n", i);
        }
        i--;
    }
    
    
    
 	
 	
 	return 0;
 }
