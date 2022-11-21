#include<stdio.h>

main(){

		int a,b,c,d,e;
		
	printf("Enter for A :- ");
	scanf("%i",&a);

	printf("Enter for B :- ");
	scanf("%i",&b);

	printf("Enter for C :- ");
	scanf("%i",&c);

	printf("Enter for D :- ");
	scanf("%i",&d);
	
	printf("Enter for E :- ");
	scanf("%i",&e);
	
	if(a>b){
			if(a>c){
					if(a>d){
							if(a>e){
									printf("A is Max");
							}
							
							else{
									printf("E is Max");
							}
					}
					
							else{
									printf("D is Max");
							}
			}
			
							else{
									printf("C is Max");
							}
			
		
	}

	else if(b>c){
					if(b>d){
							if(b>e){
									printf("B is Max");
							}
							else{
									printf("E is Max");
							}
					}
							else{
									printf("D is Max");
							}	
}

	else if(c>d){
					if(c>e){
						
									printf("C is Max");
					}
					
					else{
									printf("E is Max");
					}
}

	else if(d>e){
									printf("D is Max");
	}
	
					else{
									printf("E is Max");
					}






























}
