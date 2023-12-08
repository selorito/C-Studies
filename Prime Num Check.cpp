#include <stdio.h>
int main(){
	
int i=2,number;

printf("Enter a number for prime number check :");
scanf("%d",&number);

while(i<number/2){	
if(number%i==0) {	
	printf("The entered number '%d' is not a prime number because it is divisible by %d",number,i);
	return 0;
	}

i++;
}
printf("The entered number '%d' is a prime number ",number);

return 0;	
}

	

	
	
	

