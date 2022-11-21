#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter a :- ");
	scanf("%i",&a);

	printf("Enter b :- ");
	scanf("%i",&b);


	printf("Enter c :- ");
	scanf("%i",&c);
	
	printf("Enter d :- ");
	scanf("%i",&d);
	
	if(a>b){
		
		if(a>c){
			
			if(a>d){
				
					printf("A is Max");
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
					printf("B is Max");
				}
				
				else{
					printf("D is Max");
				}
				
}
	else if(c>d){
					printf("C is Max");
				}
				
				else{
					printf("D is Max");
				}
	
	

}
