#include <stdio.h>

struct Workers{
	char name[15];
	int age;
	int hourlysalary;
	int hour;
	int salary;
	char department[50];
	
};

int main(){
int len,i;
printf("Please enter How Many Workers :");
scanf("%d",&len);

struct Workers worker[len];

for( i=0;i<len;i++){

printf(" %d -- Please enter Worker 's name :",i+1);
scanf("%s",&worker[i].name);	

printf(" %d -- Please enter Worker 's age :",i+1);
scanf("%d",&worker[i].age);

printf(" %d -- Please enter Worker 's hourly salary:",i+1);
scanf("%d",&worker[i].hourlysalary);

printf(" %d -- Please enter Worker's hours worked:",i+1);
scanf("%d",&worker[i].hour);
printf(" %d -- Please enter  Worker 's Department 's name :",i+1);
scanf("%s",&worker[i].department);

worker[i].salary=worker[i].hour*worker[i].hourlysalary;
}	



 printf("\nWorkers Information:\n");
    for (i = 0; i < len; i++) {
        printf("Name: %s\n", worker[i].name);
        printf("Age: %d\n", worker[i].age);
        printf("Salary: %d\n", worker[i].salary);
        printf("Department: %s\n", worker[i].department);
        printf("\n");
    }
	
return 0;	
}
