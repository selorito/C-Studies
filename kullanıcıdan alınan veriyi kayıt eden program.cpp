#include <stdio.h>

int main(){
	
FILE* file;
char metin[50];

printf("Lutfen metin giriniz :");
gets(metin);
file=fopen("metin.txt","w");

fputs(metin,file);

fclose(file);
	
	
	
	
	
	
	
	
	
}
