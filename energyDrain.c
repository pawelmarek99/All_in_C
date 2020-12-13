#include <stdio.h>
#include <conio.h>

int main ()

{
int n, m, i,j,w,k,suma;
int tab1[12][12];
int c[12];


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
suma=0;
for (j=0;j<k;j++)
{
suma=suma+tab1[i][j];
c[i]= suma;
printf("\n");
}
}
printf("\n");
printf("\nNr odbiorcy:   Energia pobrana w ciagu roku:");
printf("\n");
for (i=0; i<w; i++)
{
printf("\n%4d%14d",i+1,c[i]);
}

getche();
}

