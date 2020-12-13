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
	printf("\n*\n");
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
     	for (k=0;k<n;k++)
		{
		 	suma=0;
 	 		for	(j=0;j<n;j++)
			{
				suma=suma+(macierz1[i][j]*macierz2[j][k]);
				macierz3[i][k]=suma;
	 		}
		}
	}
	printf("\n=\n");
	for (i=0;i<n;i++)
	{
		for (k=0;k<n;k++)
		{
			printf("%4d",macierz3[i][k]);
		}
		printf("\n");
	}
	return(0);
}
