#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("�п�J���������檺���סG");
	scanf("%d",&h);
	while(h>0){
		day++;
		h-=5;
		if(h<0) break;
		h+=2;
	}
    printf("%d�ѥi���쳻��",day);
}
