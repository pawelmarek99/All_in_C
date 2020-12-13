#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() 
{
    float ciagw[100], max;
    int i=0,k=0,l;
    for(i=0;i<100;i++)
    {
    	printf("\n Podaj wyraz ciagu: ");
    	scanf("%f",&ciagw[i]);
    	if(ciagw[i-1]*ciagw[i]>max&&ciagw[i-1]>0&&ciagw[i]>0)
    	{
    		max=ciagw[i-1]*ciagw[i];
		}
    	l=i+1;
    	if(fabs(ciagw[i])<0.1)
        {
        	break;
        }
    }
    printf("\n  Najwiekszy iloczyn liczb:  %.2f",max);
    return 0;
}
