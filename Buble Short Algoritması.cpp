#include <stdio.h>

int main(){
	
int dizi[10],i=9,j,temp;

while(i>=0){
printf("dizi elemanini giriniz :");
scanf("%d",&dizi[i]);

i--;
	
}

for(i=0;i<=10;i++){
	
	for(j=i+1;j<=10;j++){
		
		if(dizi[j]<dizi[i]){
			
			temp=dizi[j];
			dizi[j]=dizi[i];
			dizi[i]=temp;
		
		}
	}
	
}
printf(" Yeni dizi ");
for(i=0;i<=10;i++){
	
	printf("%d  ",dizi[i]);
}	
	
	
}
