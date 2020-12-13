#include<stdio.h>

void kopnm(int x[],int *y, int n, int m)
{
    for( int i=n; i<=m; i++)
    {
    	y[i]=x[i];
	}
}
int main()
{
	int a[8]={1,6,6,9,5,4,3,6}, b[8],n=3,m=6;
	printf("\n Tablica A:\n ");
	for (int i=0; i<8; i++)
	{
 		printf("%4d", a[i]);
	}
	printf("\n\n");
	kopnm(a,b,n,m);
  	printf("\n Tablica B:\n ");
  	for (int i=n; i<=m; i++)
  	{	
  		if(i>=n&&i<=m)
  		printf("%4d", b[i]);
  	}
  	return 0;
}
