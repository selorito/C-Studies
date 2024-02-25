#include <stdio.h>

int main(){

char metin[50],yenimetin[50];

int i,bosluk=0,kelime=0;


printf("Lütfen metin yaziniz :");
gets(metin);


for(i=0;metin[i] != '\0';i++){
	
if(metin[i] == ' ');
bosluk++;	
}	

kelime=bosluk+1;



for(i=0;i<=kelime;i++){
	
if(i%2==0){

if(metin[i]>='a'&& metin[i]<='z'){
	
	yenimetin[i]=metin[i]-32;
}else{
	 
	 yenimetin[i]=metin[i];
}

}	

if(i%2==1){
if(metin[i]>='A'&& metin[i]<='Z'){

yenimetin[i]=metin[i]+32;
}
else{
	yenimetin[i]=metin[i];
}
}		
}

for(i=0;i<=kelime;i++){
	
printf("%c",yenimetin[i]);
}
	
	
return 0;
	
}
