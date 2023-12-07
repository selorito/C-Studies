#include <stdio.h>
#include <math.h>

int main(){
	
//kullanýcýnýn girdiði açýlara göre hangi üçgen olduðunu belirten program

int aci1,aci2,aci3,toplam=0;
int kenar1,kenar2,kenar3;

printf("birinci acinin olculerini giriniz..:");
scanf("%d",&aci1);

printf("ikinci acinin olculerini giriniz..:");
scanf("%d",&aci2);	
	
printf("ucuncu acinin olculerini giriniz..:");
scanf("%d",&aci3);


toplam=aci1+aci2+aci3;
if(toplam>180){
	printf("Girilen acilar ucgen belirtmemektedir");
}
else if(toplam<180){
	printf("Girilen acilar ucgen belirtmemektedir");
}
else{



if(aci1>90 ||aci2>90 ||aci3>90){
	printf("Ucgeniniz genis acili ucgendir");
}

else if (aci1<90 ||aci2<90 ||aci3<90){
	printf("Ucgeniniz dar acili ucgendir");
}
else{
	
	printf("Uceniniz dik acili ucgendir");
}

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
	
}
