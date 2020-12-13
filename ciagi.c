#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() 
{
    float ciagw[100];
    int i=0,k=0,l;
    for(i=0;i<100;i++)
    {
    printf("\n Podaj wyraz ciagu: ");
    scanf("%f",&ciagw[i]);
    l=i+1;
    if(fabs(ciagw[i-2]+ciagw[i-1]+ciagw[i])<0.1)
        {
        break;
        }
    }
    printf("\n\n Nowy ciag to:\n ");
    for(i=0;i<l;i++)
    {
        if(fmod(ciagw[i],2)==0)
        {
            printf("%.0f,  ",ciagw[i]);

    	}
	}
    return 0;
}
