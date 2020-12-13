#include <stdio.h>
#include <conio.h>

int main ()
{
    int n,i,j,w,k,suma;
    int macierz[10][10];
    int wektor[10];
    int wynik[10];
    
	printf("Podaj n (n max = 10): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nPodaj wyraz macierzy: ");
            scanf("%d",&macierz[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {

        printf("Podaj wyraz wektora: ");
        scanf("%d",&wektor[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%4d",macierz[i][j]);
        }
        printf("\n");
    }
    printf("\n*\n");

        for(i=0;i<n;i++)
    {
        printf("%4d",wektor[i]);
        printf("\n");
    }
    printf("\n");
        for(i=0;i<n;i++)
        {
            suma=0;
            for(j=0;j<n;j++)
            {
            suma=suma+wektor[j]*macierz[i][j];
            }
            wynik[i]=suma;
        }
    printf("=\n\n");
    for(i=0;i<n;i++)
    {
        printf("%4d",wynik[i]);
        printf("\n");
    }
    return 0;
}
