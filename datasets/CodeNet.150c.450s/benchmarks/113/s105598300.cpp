#include<cstdio>
using namespace std;

int main() {
	int input;
	int i=1;
	while (true)
	{		
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		else
		{
			printf("Case %d: %d\n", i,input );
			i++;
		}
		
	}

	return 0;
}
