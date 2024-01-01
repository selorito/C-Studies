#include <stdio.h>

int main(){
	
int num,sayac=0,i;
int temp=0,gecici=0,biggest=0;


printf("Please enter a number :");
scanf("%d",&num);

int originalNum=num;

do {

if(num%10<10){
sayac++;
}

num/=10;
	
	
}while(num != 0 );
	
printf("%d",sayac);


for (i = 0; i < sayac; i++) {
        temp = originalNum % 10;
        originalNum /= 10;

        if (temp > biggest) {
            biggest = temp;
        }
    }


printf("Largest number = %d ",biggest);
	
		
	
return 0;	
}
