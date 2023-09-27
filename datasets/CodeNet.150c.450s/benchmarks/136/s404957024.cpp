#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int m,n;
	
	while(scanf("%d %d", &m, &n) != EOF){
		if(n > m) swap(m, n);
		
		int x = m;
		int y = n;
		
		while(n != 0){
			int tmp = n;
			n = m%n;
			m = tmp;
		}
		
		printf("%d %d\n", m, x/m*y);
	}
	
	return(0);
}