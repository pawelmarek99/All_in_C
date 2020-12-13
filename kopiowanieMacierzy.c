#include <stdio.h>
 
int a[6]={1,0,11,2,13,9}, b[6], c[6];

void fkop(int x[], int *y)
{
    for( int i=0; i<6; i++)
    {
    	y[i]=x[i];
	}
}

int main()
{
	printf("\n Tablica A:\n ");
	for (int i=0; i<6; i++)
	{
 		printf("%4d", a[i]);
	}
	printf("\n\n");
	fkop(a,b);
  	printf("\n Tablica B:\n ");
  	for (int i=0; i<6; i++)
  	{
  		printf("%4d", b[i]);
	}
	printf("\n\n");
	fkop(a,c);
  	printf("\n Tablica C:\n ");
  	for (int i=0; i<6; i++)
  	{
  		printf("%4d", c[i]);
	}
  	return 0;
}
