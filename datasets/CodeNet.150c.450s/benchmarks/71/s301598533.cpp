#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	while(true) {
		int n;
		if(scanf("%d",&n)<1)break;
		int count = 0;
		for(int a = 0; a < 10; a++)
			for(int b = 0; b < 10; b++)
				for(int c = 0; c < 10; c++)
					for(int d = 0; d < 10; d++)
						if(a+b+c+d==n)count++;
		printf("%d\n",count);
	}
	return 0;
}