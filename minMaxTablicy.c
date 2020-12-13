#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() 
{
    float ciagt[100], max=0,min=0;
    int i=0,k=0,l;
    for(i=0;i<100;i++)
    {
    	printf("\n Podaj wyraz ciagu T: ");
    	scanf("%f",&ciagt[i]);
    	l=i+1;
    	if(ciagt[i]>0)
    	{
    		if(ciagt[i]>max)
    		{
    			max=ciagt[i];
			}
		}
		if(ciagt[i]<0)
    	{
    		if(ciagt[i]<min)
    		{
    			min=ciagt[i];
			}
		}
		if(max>fabs(min))
        {
        	break;
        }
    }
    printf("\n   Najwiekszy wyraz ciagu T:  %.2f",max);
    printf("\n  Najmniejszy wyraz ciagu T:  %.2f",min);
	printf("\n\n\n Ciag Q:\n  ");
	for(i=0;i<l;i++)
	{
		if(ciagt[i]<0)
		{
			printf("%.2f,   ",ciagt[i]);
		}
	}
    
    return 0;
}
