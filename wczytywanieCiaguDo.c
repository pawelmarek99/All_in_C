#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() 
{
    float ciagu[100],ciagv[100];
    int i=0,k=0,l;
    
	printf("\n Podaj wyraz ciagu U: ");
    scanf("%f",&ciagu[0]);
    ciagv[0]=ciagu[0];
    	
	
	for(i=1;i<100;i++)
    {
    	printf("\n Podaj wyraz ciagu U: ");
    	scanf("%f",&ciagu[i]);
    	ciagv[i]=0.5*(ciagu[i-1]+ciagu[i]);
    	l=i+1;
    	if(fabs(ciagv[i]-ciagv[i-1])<0.1)
    	{
    		break;
		}
	}
	printf("\n\n  Ciag V\n\n  ");
	for(i=0;i<l;i++)
	{
		printf("%.2f,  ",ciagv[i]);
	}
    return 0;
}
    	
