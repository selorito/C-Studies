#include <stdio.h>
#include <conio.h>

int main(){
	
	int vize,final,butunleme;
	float ortalama;
	
	printf("Lutfen vize notunuzu girin..:");
	scanf("%d",&vize);
	
	printf("Lutfen final notunuzu giriniz..:");
	scanf("%d",&final);
	
	ortalama = vize*0.4+final*0.6;

	printf("%.2f\n",ortalama);
	
	if(ortalama>=60){
		printf("Tebrikler Gectiniz");
	}else{
	printf("Lutfen butunleme notunuzu giriniz..:");
	scanf("%d",&butunleme);
	ortalama = vize*0.4+butunleme*0.6;
	 if(ortalama>=60){
		printf("Tebrikler Gectiniz");
	}else{ printf("Kaldiniz..");
	}
	
		
		
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	

