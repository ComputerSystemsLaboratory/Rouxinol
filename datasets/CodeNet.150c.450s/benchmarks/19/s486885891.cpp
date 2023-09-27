#include<cstdio>
using namespace std;

int main() {
	int a,b;
	int i=1;
	while (true)
	{		
		scanf("%d %d",&a,&b);
		if (a == 0 && b==0) {
			break;
		}
		else
		{
			if(a<=b)
				printf("%d %d\n",a,b );
			else
				printf("%d %d\n", b, a);
		}
		
	}

	return 0;
}
