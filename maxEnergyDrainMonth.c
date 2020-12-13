#include <stdio.h>
#include <conio.h>

int main ()

{
int n, m, i,j,w,k;
int tab1[12][12];
int c[12];
int miesiac[12];


printf(" Podaj liczbe wierszy: "); scanf("%d",&w);
printf("\n Podaj liczbe kolumn: "); scanf("%d",&k);

for (i=0;i<w;i++)
{
for (j=0;j<k;j++)
{
printf("\n Podaj liczbe: ");
scanf("%d",&tab1[i][j]);
}
}
printf("\n");

for (i=0;i<w;i++)
{
for (j=0;j<k;j++)
{
printf("%4d",tab1[i][j]);
}
printf("\n");
}

for (i=0;i<w;i++)
{
miesiac[i]=1;
c[i]=tab1[i][0];
	for (j=1;j<k;j++)
	{
		if(c[i]<tab1[i][j])
		{
    		c[i]=tab1[i][j];
    		miesiac[i]=j+1;
		}
	}
printf("\n");
}
printf("\n");
printf("\nNr odbiorcy:   Miesiac z maks energia pobrana: ");
printf("\n");
for (i=0; i<w; i++)
{
printf("\n%4d%14d",i+1,miesiac[i]);
}

getche();
}

