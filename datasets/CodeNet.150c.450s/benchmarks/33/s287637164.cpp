#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main()
{
	int x, y, s;
	while (scanf("%d %d %d", &x, &y, &s), x + y + s){
		P maxi = P(0, 0);
		for (int i = 1; i < s; i++){
			int a = i;
			int ax = a * (100 + x) / 100;
			int bx = s - ax;
			
			for (int j = 1; j < s; j++){
				int b = j;
				if (j * (100 + x) / 100 == bx){
					int ay = a * (100 + y) / 100;
					int by = b * (100 + y) / 100;
					//printf("%d %d %d %d\n", ay, by, a, b);
					maxi = max(maxi, P(ay + by, a + b));
				}
			}
		}
		
		cout << maxi.first << endl;
	}
	
	return 0;
}