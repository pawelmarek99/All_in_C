#include<stdio.h>
#include<math.h>

void suma(int x[],int *suma, int *bezwzsuma)
{
	*suma=0;
	*bezwzsuma=0;
    for( int i=0; i<=8; i++)
    {
    	*suma=*suma+x[i];
    	*bezwzsuma=*bezwzsuma+fabs(x[i]);
	}
}
int main()
{
	int a[8]={1,6,-1,-9,5,4,3,6}, sumka, bezwzsuma;
	suma(a,&sumka,&bezwzsuma);
	printf("\n\n  Suma wyrazow=  %d",sumka);
	printf("\n\n  Bezwzgledna suma wyrazow=  %d",bezwzsuma);
}
