#include <stdio.h>

int main(){
	
char metin[40];
int i;
int bosluksayac=0;

printf("Lutfen Metin Giriniz :");
	
gets(metin);
printf("\n");
puts(metin);

for( i = 0; metin[i]!='\0'; i++ )  
{
	if(metin[i]==' ')
	{
		bosluksayac++;
	}	
}
int kelimesayisi=0;
kelimesayisi=bosluksayac+1;	
printf("Metindeki kelime sayisi %d dir.",kelimesayisi);
	
	
	
	
	
	
	return 0;
}
