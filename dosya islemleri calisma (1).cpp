#include <stdio.h>

int main(){

char isim[100];
int max,no,maas;
FILE* file;

printf("kac iscinin bilgisini gireceksiniz :");
scanf("%d",&max);

file=fopen("calisma.txt","w");

if(file==NULL){
	
	printf("dosya isleminizde hata olmustur...");
}
else{
	printf("verileriniz dosyaya isleniyor...\n");

for(int i=1;i<=max;i++){
    {
      printf("%d. iscinin numarasi: ",i); 
	  scanf("%d",&no);
      printf("%d. iscin adi     : ",i); 
	  scanf("%s",&isim);
      printf("%d. iscinin maasi    : ",i);
	   scanf("%d",&maas);
      printf("\n");

      fprintf(file,"%5d %10s %3d\n",no,isim,maas); /* verileri formatly yaz! */
    }

fprintf(file,"%s",isim);	
}	
	

}
fclose(file);
}
