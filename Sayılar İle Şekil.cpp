#include <stdio.h>
int main(){
	
int i,j,n;

printf("dongu kac adim ilerlesin :");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
	for(j=0;j<i;j++)
	{
		printf("%d ",j+1);
		
	}
	printf("\n");
	
}
	for(i=0;i<=n;i++)
{
	for(j=0;j<=n-i;j++)
	{
		printf("%d ",j+1);
		
	}
	printf("\n");
		
}


	
	
	return 0;
}
