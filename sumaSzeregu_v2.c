#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int wykladnik1,wykladnik2,wykladnik3, x, y, k;
float wynik, suma;
 float sumaszeregu(int x, int y, int k)
 {
 	wykladnik1=x-1;
	wykladnik2=y-1;
	wykladnik3=x+y;
 	for (int i=1;i<=k;i++)
 	{
 		suma=suma+((pow(i,wykladnik1)+pow(i,wykladnik2))/(pow(i+1,wykladnik3)));
 	
	 }return(suma);
 }



int main()
{
	printf("Podaj liczbe x: ");
	scanf("%d",&x);
	printf("Podaj liczbe y: ");
	scanf("%d",&y);
	printf("Podaj liczbe k: ");
	scanf("%d",&k);
	wynik=sumaszeregu(x,y,k);
	printf("%f",wynik);
	
	
}
