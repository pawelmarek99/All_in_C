#include <stdio.h>
#include <conio.h>

int main ()
{
	int n, i, j, k, suma;
	int macierz1[10][10];
	int macierz2[10][10];
	int macierz3[10][10];
	printf("\nPodaj n (n maks 10): ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nPodaj wartosc elementu 1 macierzy: ");
			scanf("%d",&macierz1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nPodaj wartosc elementu 2 macierzy: ");
			scanf("%d",&macierz2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",macierz1[i][j]);
		}
		printf("\n");
	}
	printf("\n+\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",macierz2[i][j]);
		}
		printf("\n");
	}

	for (i=0;i<n;i++)
	{		
		for(j=0;j<n;j++)
		{
			suma=0;
			suma=macierz1[i][j]+macierz2[i][j];
			macierz3[i][j]=suma;
		}
	}
	printf("\n=\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%4d",macierz3[i][j]);
		}
		printf("\n");
	}
	return(0);
}
