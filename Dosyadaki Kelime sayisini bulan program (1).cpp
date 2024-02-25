#include <stdio.h>

int main(){
int bosluksayac=0,kelimesayac=0,i;
char metin[1000],dosyam[1000];

//Kendimiz dosya olusturduk ilerleyen asamada bu dosyadaki kelime sayisini hesaplayacagiz


FILE* file,*file2;

file=fopen("oku.txt","w");


printf("Kaydetmek istediginiz metni giriniz :");
gets(metin);


fputs(metin,file);

fclose(file);

//buraya kadar kendi dosyamizi olusturduk icine kendi yazmak istediklerimiz yazdik
//bu asamadan sonra dosyayý okuma ve kelime sayisini hesaplama islemi var

file2=fopen("oku.txt","r");

i=0;
while(!feof(file2)){

dosyam[i]=getc(file2);
i++;


}dosyam[i] = '\0';

fclose(file2);	
for(i=0; dosyam[i] !='\0';i++){	
if(dosyam[i]== ' '){
bosluksayac++;
}
}

kelimesayac=bosluksayac+1;
printf("dosyanizin kelime sayisi == %d",kelimesayac);

	return 0;
}
