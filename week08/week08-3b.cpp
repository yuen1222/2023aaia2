#include <stdio.h>
int main()
{
	int a,i=1,k;
	scanf("%d",&a);
	while(i<=a){
		k=1;
		while(k<=a){
			if(k<=(a-i))
				printf(" ");
			else
				printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
