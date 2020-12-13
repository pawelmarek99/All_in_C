#include<stdio.h>

int maks(int tab[],int *n)
{
	int maks=tab[0];
	*n=1;
	for(int i=1;i<6;i++)
	{
		if(tab[i]>maks)
		{
			maks=tab[i];
			*n=i+1;
		}
	}
	return (maks);
}
int main()
{
	int macierz[7]={1,6,4,2,7,9,8};
	int numer, wyrazm;
	wyrazm=maks(macierz,&numer);
	printf("\n  Maksymalny element tablicy to:  %d\n  ",wyrazm);
	printf("Jest to %d element tablicy.",numer);
	return 0;
}
