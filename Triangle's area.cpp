#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int alan(int x,int y,int z);
int main(){
int side1,side2,angle;
printf("Please enter the length of one side of the triangle :");
scanf("%d",&side1);
printf("Please enter the length of the second side of the triangle :");
scanf("%d",&side2);
printf("Please enter the angle between the two entered edges :");
scanf("%d",&angle);

float area=alan(side1,side2,angle);
printf("The area of your triangle is = %.2f",area);
	
	return 0;
}

alan(int x,int y,int z){
float angle_in_radians = z * M_PI / 180.0;
float d= 0.5 * x * y * sin(angle_in_radians);

return d;
	
}
