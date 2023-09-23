#include <cstdio>
using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int y, m, d;
		scanf("%d %d %d", &y, &m, &d);
		
		int cnt = 0;
		while (y != 1000 || m != 1 || d != 1){
			d++;
			cnt++;
			if (d == 20 && y % 3 != 0 && m % 2 == 0){
				d = 1;
				m++;
			}
			else if (d == 21 && (y % 3 == 0 || m % 2 == 1)){
				d = 1;
				m++;
			}
			
			if (m == 11){
				m = 1;
				y++;
			}
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}