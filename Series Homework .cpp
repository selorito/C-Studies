#include <stdio.h>
int main(){
int dizi[10],i,sum;

for(i=1;i<11;i++){
	printf("Please enter the %d. element of array :",i);
	scanf("%d",&dizi[i]);
}

for(int k=0;k<10;k++){
	sum+=dizi[k];
}

printf("Sum of the array =%d\n",sum);
float avg=(float)sum/10;
printf("Average of the array =%.2f\n",avg);

















return 0;
}


