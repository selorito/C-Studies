#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main(){
	
int A[50],B[50],C[50],i,j,temp;

srand(time(NULL));


    for(i=0; i<10; i++)
    {   A[i]=rand()%100;
        C[i] =A[i];
        printf("%d  ",A[i]);
    }
    
    for(i=0;i<10;i++){
    	
    B[i]=rand()%100;
	C[i]=B[i];
	printf("%d  ",B[i]);		
	}

for(i=0;i<20;i++){
	
	for(j=i+1;j<i;j++){
		
		if(C[j]<C[i]){
			
		 temp=C[j];
		 C[j]=C[i];
		 C[i]=temp;	
		}	
	}	
}

printf:("Yeni dizi \n");
for(i=0;i<10;i++){
printf("%d  ",C[i]);
}
return 0;	
}
