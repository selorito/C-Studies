#include <stdio.h>
int main(){
int a;
printf("How many elements do you want the array to have :");
scanf("%d",&a);
int dizi[a],sum,sayac1=0,sayac2=0,sayac3=0;


for(int i=0;i<a;i++){
	printf("Enter the %d element of array :",i+1);
	scanf("%d",&dizi[i]);
	sum+=dizi[i];
	}
	
	float avg=(float)sum/a;
	printf("Array's average %.2f\n:",avg);

for(int i=0;i<a;i++){
 if(avg>dizi[i]){
 	sayac1++;
 	
 }
 else if(avg<dizi[i]){
 	sayac2++;
 }
 else{
 	sayac3++;
 }
	
}
	
printf("%d element is greater than array's average\n",sayac2);
printf("%d element is smaller than array's average\n",sayac1);
printf("%d element is equal than array's average\n",sayac3);	
	
	
	
	
		return 0;
}
