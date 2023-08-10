#include<stdio.h>
 void main()
 {
 	int i=1,n;
 	printf("ENTER VALUE = ");
 	scanf("%d",&n);
 	 

     do{
        if (n % 2 == 0) { 
            printf("%d \n", n);
        }
        n--;
    }while (n >= i);
    
    
    
 	
 	
 	return 0;
 }
