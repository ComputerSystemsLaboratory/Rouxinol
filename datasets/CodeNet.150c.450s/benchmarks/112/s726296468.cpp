#include <stdio.h>

void scanfone(char *c)
{
	while(scanf("%c",c))
	{
		if(*c!=' '&&*c!='\n'){break;}
		
	}
}

int main()
{
	int i,j;
	
	int n;
	char data[2][100];
	
	
	int m;
	char c;
	
	while(scanf("%d",&n)&&n!=0)
	{
		/*data read*/
		for(i=0;i<n;++i)
		{
			for(j=0;j<2;j++)
			{
				scanfone(&data[j][i]);
			}
		}
		/*change ward*/
		scanf("%d",&m);
		
		for(i=0;i<m;++i)
		{
			scanfone(&c);
			for(j=0;j<n;++j)
			{
				if(c==data[0][j])
				{
					c=data[1][j];
					break;
				}
			}
			printf("%c",c);
		}
		printf("\n");
	}	
	return 0;
}