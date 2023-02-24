#include<stdio.h>

main(){
	
	int a,n;
	
	printf("enter a value : ");
	scanf("%d",&a);
	
	n = a*a;
	
	int *b;
	
	b = &n;
	
	printf("%u [address] ->  %d [value]",b,*b);
	
	
}
