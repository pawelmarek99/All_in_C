#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int tab[100],i=0;
struct studenci 
{
	char *imie;
	char *nazwisko;
	int rokstudiow;
	int nrgrupy;
	char *czystypendium;
};
int main()
{	
	struct studenci tab[0];
	
	pawel.imie="Pawel";
	pawel.nazwisko="Leja";
	pawel.rokstudiow=1;
	pawel.nrgrupy=4;
	pawel.czystypendium="nie";
	printf(" Imie i nazwisko: %s %s\n Rok studiow: %d \n Nr grupy: %d\n Pobiera stupendium?: %s",pawel.imie,pawel.nazwisko,pawel.rokstudiow,pawel.nrgrupy,pawel.czystypendium);
	
	printf("\n\n");
	struct studenci seba;
	seba.imie="Sebastian";
	seba.nazwisko="Pumpernikiel";
	seba.rokstudiow=3;
	seba.nrgrupy=1;
	seba.czystypendium="tak";
	printf(" Imie i nazwisko: %s %s\n Rok studiow: %d \n Nr grupy: %d\n Pobiera stupendium?: %s",seba.imie,seba.nazwisko,seba.rokstudiow,seba.nrgrupy,seba.czystypendium);
	
	
	return(0);
}		
	

