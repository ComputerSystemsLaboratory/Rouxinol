# include <stdio.h>

int main ()
{
	int n; 
	int a[10], b[10], c[10] ;
	while(scanf("%d", &n) != EOF)
	{
		while(n --)
		{
			int m = 0 ;
			int k = 0 ;
			int maxn ;
			for(int i = 0; i < 10; i ++)
				scanf("%d", &a[i]) ;
			int f = 0 ;
			maxn = 0 ;
			for(int i = 0; i < 10; i ++)
			{
				if(a[i] > maxn)
				{
					maxn = a[i] ;
					b[m++] = a[i] ;
				}
				else
				{
					if(a[i] > f)
					{
						f = a[i] ;
						c[k++] = a[i] ;
					}					
				}
			}
			if(m + k == 10)
				puts("YES") ;
			else
				puts("NO") ;
		
		}	
	}
	return 0 ;
}