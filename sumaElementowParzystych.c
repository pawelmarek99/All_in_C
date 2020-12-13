#include<stdio.h>

void sumy(int x[], int *sumap,int *suman)
{
	*sumap=0;
    *suman=0;
	for( int i=0; i<=8; i++)
    {
    	if(x[i]%2==0)
    	{
    		*sumap=*sumap+x[i];
		}
		else
		{
			*suman=*suman+x[i];
		}
	
	}
}
int main()
{
	int a[8]={1,2,3,4,5,6,7,9}, sumap, suman;
	printf("\n Tablica A:\n ");
	for (int i=0; i<8; i++)
	{
 		printf("%4d", a[i]);
	}
	printf("\n\n");
	sumy(a,&sumap,&suman);
	printf(" Suma elementow parzystych tablicy = %4d\n\n",sumap);
	printf(" Suma elementow nieparzystych tablicy = %4d\n\n",suman);
}
