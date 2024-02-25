#include <stdio.h>

// Bu fonksiyon ile en uzun kelime sayisini hesaplayip "..." kelimesinin kaç harften oluþtuðunu buluruz


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


// fonksiyon mantýðý cümleyi indis indis gezmek
//ikinci döngü ise kelimeleri indis indis gezmek 
//ikinci döngü sayesinde indis indis gezerken "boþluk" karakterine denk gelince bir sonraki harfe geçmeyi saðlar

void long_word2(){ 

	
	
	
	
	
	
	
	
}

//main fonksiyonu içinde yeni dosya açýp dosya içerisine metin yazdiktan sonra istenilen sonuçlarý elde etmek için 
//dosyayý bir array içerisine kaydedip fonksiyonlara parametre olarak gönderiyoruz..

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
