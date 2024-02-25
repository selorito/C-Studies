#include <stdio.h>

// Bu fonksiyon ile en uzun kelime sayisini hesaplayip "..." kelimesinin ka� harften olu�tu�unu buluruz


int longest_word(char dizi[1000]){
	
	int longest=0,temp=0,word=0;
	
	for(int i=0;dizi[i] != '\0';i++){
		for(int j=0; dizi[j] !=' ';j++){
			
		word++;	
			
	if(word>longest){
		longest=word;
		word=temp;
	}
	else if(longest>word){
		
		word=temp;	
	} else{
	    longest=word;
		word=temp;	
	}
	
	
		}		
	}	
	
	return longest;
}


// fonksiyon mant��� c�mleyi indis indis gezmek
//ikinci d�ng� ise kelimeleri indis indis gezmek 
//ikinci d�ng� sayesinde indis indis gezerken "bo�luk" karakterine denk gelince bir sonraki harfe ge�meyi sa�lar

void long_word2(){ 

	
	
	
	
	
	
	
	
}

//main fonksiyonu i�inde yeni dosya a��p dosya i�erisine metin yazdiktan sonra istenilen sonu�lar� elde etmek i�in 
//dosyay� bir array i�erisine kaydedip fonksiyonlara parametre olarak g�nderiyoruz..

int main(){
	
char metin[1000],kayit[1000];	

int i,enuzun;
	
	
FILE* file,* file2;

file=fopen("dosyam.txt","w");

printf("Dosyaniza kaydetmek istediklerinizi yaziniz :");
gets(metin);

fputs(metin,file);
fclose(file);

file2=fopen("dosyam.txt","r");


i=0;

while(!feof(file2)){

	
kayit[i]=fgetc(file2);	
	
i++;
	
}kayit[i] = '\0';


enuzun =longest_word(kayit);

printf("Dosyanizdaki en uzun kelime %d harflidir.",enuzun);

return 0;
}
