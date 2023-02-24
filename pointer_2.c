#include<stdio.h>

main(){
	
	int a,b;
	
	printf("enter 1st value : ");
	scanf("%d",&a);
	
	printf("enter 2nd value : ");
	scanf("%d",&b);
	
	int *n , *m;
	
	a=a+b; 
	b=a-b; 
	a=a-b;   

	n = &a;
	m = &b;
	
	
	printf("%u [address] ->  %d [value]\n",n,*n);
	
	printf("%u [address] ->  %d [value]",m,*m);
	
	
}
