#include<stdio.h>
#include<stdlib.h>

int 	i, k;
float suma,wyniksumy;
float x;
float silnia(int x)
{
	int wynik =1;
	if(x==0)
	{
		wynik=1;
	}
	else
	{
	for(int n=x;n>1;n--)
	{
		wynik=wynik*n;
	}
	}
	return(wynik);
}
float licznik(int n)
{
	int licznikkon;
	licznikkon=silnia(2*n);
	return(licznikkon);
}
float potega(float x, int i) 			
{
	int n; 
	float potegakon;
	potegakon=1;

	if( i==0) {potegakon=1;} 
	else{ 
	for (n=1; n<=i; n++)
	{
		potegakon=potegakon*x;
	}
	}
	return (potegakon);

}
float mianownik(int n)
{
	int pierwszy, drugi,trzeci,mianownikkon;
	pierwszy=potega(4,n);
	drugi=potega(silnia(n),2);
	trzeci=(2*n)+1;
	mianownikkon=pierwszy*drugi*trzeci;
	return(mianownikkon);
}
float element (float x, int n)
{
	float uno, dos, koniec;
	int wykladnik;
	wykladnik=(2*n)+1;
	uno=licznik(n)/mianownik(n);
	dos=potega(x,wykladnik);
	koniec=uno*dos;
	return(koniec);
}
 float sumaszeregu(float x, int k)
 {
 	for (i=0;i<=k;i++)
 	{
 		suma=suma+element(x,i);
 	
	}
	return(suma);
 }

int main()
{
	printf("Podaj liczbe x (|x|<1): ");
	scanf("%f",&x);
	printf("\n Podaj liczbe k: ");
	scanf("%d",&k);
	wyniksumy=sumaszeregu(x,k);
	printf("\n Wynik dzialania podanego w zadaniu= %f",wyniksumy);

}
