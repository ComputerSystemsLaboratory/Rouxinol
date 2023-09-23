#include <cstdio>

using namespace std;

int get(int y, int m, int d)
{
	int ret = 0;
	ret += (y - 1) * (20 + 19) * 5 + (y - 1) / 3 * 5;
	
	for (int i = 1; i < m; i++){
		ret += 19 + (i % 2 || y % 3 == 0);
	}
	
	return (ret + d);
}

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while (T--){
		int y, m, d;
		scanf("%d %d %d", &y, &m, &d);
		printf("%d\n", get(1000, 1, 1) - get(y, m, d));
	}
	
	return (0);
}