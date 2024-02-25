#include <stdio.h>

int main(){
	
FILE* file;

file=fopen("Dosya.txt","w");


if(file==NULL){
printf("islem basarisiz olmmustur...");
}

else{
printf("verileriniz dosyaya aktariliyor...");
for(int i=0;i<=100;i++){
if(i%3==0 &&i != 0){
	fprintf(file,"%d\n",i);
}
}
}
fclose(file);
	
	return 0;
}
