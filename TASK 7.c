#include<stdio.h>

main(){
	
	int a,b,c,d,e;
	
	printf("Enter the 5 values: ");
	scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	a>b ?
		a>c?
			a>d?
				a>e?
					printf("A is Max")
					:
				printf("E is Max")
				:
			printf("D is Max")
			:
		printf("C is Max")
		
	:
	b>c?
		b>d?
			b>e?
				printf("B is Max")
				:
			printf("E is Max")
			    :		
		printf("D is Max")
	
	:
	c>d?
		c>e?
			printf("C is Max")
			:
		printf("E is MAX")
	:
	d>e?
		printf("D is Max")
		:
	printf("E is Max");
	
	
}
