#include <math.h>
#include <stdio.h>

#define M_E 2.71828182845904523536

float koncowykoniec;
float x;
int i;

float mnozenie(float x, int i)
{
	float wynik;
	wynik=x*i;
	return(wynik);
}

float potegae(float x, int i) 			
{
	int n; 
	float wynik,wykladnik;
	wynik=1;
	wykladnik=mnozenie(x,i);
	if( wykladnik==0) {wynik=1;} 
	else
	{
		for (n=1; n<=wykladnik; n++)
		{
			wynik=wynik*M_E;
		}
	}
	return (wynik);
}

float potegaminuse(float x, int i) 			
{
	int n; 
	float wynik, wynik2, wykladnik;
	wynik=1;
	wykladnik=mnozenie(x,i);
	if( wykladnik==0) {wynik=1;} 
	else
	{
		for (n=1; n<=wykladnik; n++)
		{
			wynik=wynik*M_E;
		}
	}
	wynik2=1/wynik;
	return (wynik2);
}

float wynik(float x, int i)
{
	float koniec, przedwynik;
	przedwynik=potegae(x,i)+potegaminuse(x,i);
	koniec=przedwynik/2;
	return(koniec);	
}

int main()
{
	printf("Podaj x: ");scanf("%f",&x);
 	printf("Podaj i: ");scanf("%d",&i);
 	koncowykoniec=wynik(x,i);
 	printf("cosh(%.1f)= %.10f",mnozenie(x,i),koncowykoniec);

}
