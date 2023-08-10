#include<stdio.h>
 void main()
 {
 	int i=1,n;
 	printf("ENTER VALUE = ");
 	scanf("%d",&n);
 	 

    do {
        if (i % 2 == 1) { 
            printf("%d \n", i);
        }
        i++;
    }while (i <= n);
    
    
    
 	
 	
 	return 0;
 }
