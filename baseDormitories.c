#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct akademiki 
{
char adres[20];
int liczbamiejsc;
int nr;
int liczbamieszk;
};

struct akademiki tablica[10],t;

int main()
{

	int i,n,w,k;
	char odpowiedz;

	i=-1;
	do
	{
 		i++;
		printf("\nPodaj adres akademika: ");
		scanf("%s",&tablica[i].adres);		
		printf("\nPodaj nr akademika: ");
		scanf("%d",&tablica[i].nr);
		printf("\nPodaj liczbe miejsc w akademiku: ");
		scanf("%d",&tablica[i].liczbamiejsc);
		printf("\nPodaj aktualna liczbe mieszkancow: ");
		scanf("%d",&tablica[i].liczbamieszk);
		printf("\nWprowadzasz kolejny akademik? (T/N) ");
		fflush(stdin);
		scanf("%c",&odpowiedz);
	}while (odpowiedz=='T' || odpowiedz=='t');

	n=i+1;
	
	printf("\n      Adres  Nr akademika    Liczba miejsc    Liczba zamieszkalych\n");
	for (i=0; i<n; i++)
  	{
  		printf(" %10s  %12d  %15d %23d\n",&tablica[i].adres,tablica[i].nr, tablica[i].liczbamiejsc,tablica[i].liczbamieszk);
	}
	
	w=1;
	while(w)
	{
		w=0;
	for(i=0;i<n;i++)
	{
		if (tablica[i].nr>tablica[i+1].nr)
   		{
   			t=tablica[i];
   			tablica[i]=tablica[i+1];
   			tablica[i+1]=t;
   			w=1;
   		}
	}
	}
	printf("\nPo sortowaniu struktury:")
	printf("\n\n      Adres  Nr akademika    Liczba miejsc    Liczba zamieszkalych\n");

	for(i=0;i<n+1;i++)
	printf( " %10s  %12d  %15d %23d\n",tablica[i].adres,tablica[i].nr,tablica[i].liczbamiejsc,tablica[i].liczbamieszk);
	
	
	return (0);
}

