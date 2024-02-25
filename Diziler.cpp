#include <stdio.h>

int main(){
	
	
int n,i;
int sayilar[50];
int toplam=0;


for(i=0;i<50;i++)
{
	
	
	printf("Dizi elemani gir :");
	scanf("%d",&sayilar[i]);
	
	toplam+=sayilar[i];
	
}

int ortalama=toplam/50;
	printf("%d\n",ortalama);
	
	
int ortalamaust,ortalamaalt,ortalamaesit;
for(i=0;i<50;i++)
{
	
if(ortalama>sayilar[i])
 {
 	ortalamaalt++;
 }else if (ortalama <sayilar[i]){
 	ortalamaust++;
 }
 else{
 	ortalamaesit++;
 	
 }
}
printf("ortalamanin altinda olan sayi adeti: %d\n",ortalamaalt);
printf("ortalamanin ustunde olan sayi adeti :%d\n",ortalamaust);
printf("ortalamaya esit olan sayi adeti :%d\n",ortalamaesit);
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
