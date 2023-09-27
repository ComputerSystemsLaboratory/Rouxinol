#include <stdio.h>

int main (void)
{
	int w, i, n, m;
	scanf("%d", &w);
	
	int lot[w];
	for(i=0; i<w; i++)
	{
		lot[i]=i+1;
	}
	scanf("%d", &n);
	int lot_n[2];
	
	for(i=0; i<n; i++)
	{
		scanf("%d,%d", &lot_n[0], &lot_n[1]);
		m=lot[lot_n[0]-1];
		lot[lot_n[0]-1]=lot[lot_n[1]-1];
		lot[lot_n[1]-1]=m;
	}
	
	for(i=0; i<w; i++)
	{
		printf("%d\n", lot[i]);
	}
	return 0;
}