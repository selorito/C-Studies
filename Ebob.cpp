#include <stdio.h>

int Ebob(int x,int y){

int enbuyuk,ebob=1,i;
	
if(x>y){
	
enbuyuk=x;	
}	
else if(x<y){
	
enbuyuk=y;	
}

else{
enbuyuk=x;
}

for(i=2;i<=enbuyuk;i++){
	
if(x%i==0 && y%i==0){
	
ebob=ebob*i;

x=x/i;
y=y/i;

i=1;
}	
}	
return ebob;	
}

int main(){
	
int sayi1,sayi2,result;

printf("Lutfen ilk sayi degerini giriniz :");
scanf("%d",&sayi1);

printf("Lutfen ikinci sayi degerini giriniz :");
scanf("%d",&sayi2);


result=Ebob(sayi1,sayi2);

printf("Girilen iki sayinin ebob degeri = %d",result);	
	
return 0;
	
}
