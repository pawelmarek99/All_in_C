#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m,i,j,k,suma;
	int macierzk[100][100], macierzktrans[100][100], macierzl[100][100],macierzm[100][100];
	printf("\n  Podaj liczbe wierszy macierzy K: "); scanf("%d",&n);
	printf("\n  Podaj liczbe kolumn macierzy K: "); scanf("%d",&m);

	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("\n Podaj K%d%d element macierzy: ",i+1,j+1);
			scanf("%d",&macierzk[i][j]);
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			macierzktrans[i][j] =macierzk[j][i];
		}
	}
	
	for (i=0;i<n;i++)
    {
		for (k=0;k<n;k++)
		{
		suma=0;
 	 	for	(j=0;j<m;j++)
		{
			suma=suma+(macierzk[i][j]*macierzktrans[j][k]);
		}
		macierzl[i][k]=suma;
	 	}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if(i==j||i+j==n+1)
			{
				macierzm[i][j]=macierzl[i][j];
			}
			else
			{
				macierzm[i][j]=0;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%4d",macierzm[i][j]);
		}
		printf("\n");
	}
	
	FILE *zapis;
	zapis=fopen ("c:/Users/mapa/Desktop/elerning/Programowanie C/macierz.txt", "a");
		for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			fprintf(zapis,"%4d",macierzm[i][j]);
		}
		fprintf(zapis,"\n");
	}
	fclose(zapis);

	return 0;
}

