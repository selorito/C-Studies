#include <stdio.h>

int main(){
	
int sayi,faktoriyel;
faktoriyel=1;

printf("Faktoriyeli Alýnacak Sayýyý Giriniz..:");
scanf("%d",&sayi);

while(sayi !=0){
	
	
	faktoriyel=sayi*faktoriyel;
	sayi-=1;
	printf("%d\n",faktoriyel);
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
