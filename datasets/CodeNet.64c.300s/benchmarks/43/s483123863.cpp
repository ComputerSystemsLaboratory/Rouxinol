#include <cstdio>

int main (int argc, char const* argv[])
{
	int a=0,b=0;
	
	for (unsigned int i = 0; i < 4; i += 1)
	{
		int c;
		scanf("%d",&c);
		a+=c;
	}
	
	
	for (unsigned int i = 0; i < 4; i += 1)
	{
		int c;
		scanf("%d",&c);
		b+=c;
	}
	
	printf("%d\n",(a>b)?a:b);
	
	return 0;
}