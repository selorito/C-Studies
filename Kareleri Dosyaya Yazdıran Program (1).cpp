#include <stdio.h>

int main(){
	

FILE* file;

file=fopen("work.txt","w");

if(file==NULL){
	
printf("dosya isleminiz basarisiz olmustur...");
}
else{
	
	printf("verileriniz dosyaya yazdiriliyor...");
for(int i=0;i<10;i++){

fprintf(file,"%d\n",i*i);

}
}
fclose(file);	
	
	
	
	
	

	
	return 0;
}
