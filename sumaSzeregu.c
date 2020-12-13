#include <stdio.h>
#include<math.h>
int suma=0;
int i;
float wynik=1;
float koniec;
int k;
float x;
float potega(float x, int i) 			
{
int n; 
float wynik;
wynik=1;

if( i==0) wynik=1; else 
for (n=1; n<=i; n++)
	{
		wynik=wynik*x;
}
return (wynik);

}

 float sumaszeregu(int x, int k)
 {
 	for (i=0;i<=k;i++)
 	{
 		suma=suma+potega(x,i);
 	
	 }return(suma);
 }
 int main()
 {
 	printf("Podaj x: ");scanf("%f",&x);
 	printf("Podaj k: ");scanf("%d",&k);
 	koniec=sumaszeregu(x,k);
 	printf("Suma szeregu wynosi: %f",koniec);
 }
 
