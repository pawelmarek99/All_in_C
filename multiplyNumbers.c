#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
float iloczyn, liczba;
char odp;
iloczyn=1;

do{

		do{
			printf("\n Podaj liczbe "); scanf("%f", &liczba);
			if (liczba>0)
			iloczyn=iloczyn*liczba;
		}while(liczba!=0);

printf("\n Iloczyn liczb=%f", iloczyn);

printf ("\n Powtarzasz?  t/n"); 
scanf("%c", &odp);

} while (odp=='t'|| odp=='T');

return 0;
system("pause");

}

