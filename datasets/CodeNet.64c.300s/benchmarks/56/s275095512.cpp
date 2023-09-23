#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

const int M = 10, Y = 1000;
int sdays[M + 1], ldays[M + 1];

int main(){
	int n, y, m, d, c;
	fill(sdays, sdays + M + 1, 20);
	fill(ldays, ldays + M + 1, 20);
	for(int i = 1;i <= M;++i){
		if(i % 2 == 0){
			sdays[i]--;
		}
	}

	cin >> n;

	for(int i = 0;i < n;++i){
		c = 0;
		cin >> y >> m >> d;
		int* p = y % 3 == 0 ? ldays : sdays;
		c += p[m] - d + 1;
		for(int j = m + 1;j <= M;++j){
			c += p[j];
		}
		for(int j = y + 1;j < Y;++j){
			p = j % 3 == 0 ? ldays : sdays;
			c += accumulate(p + 1, p + M + 1, 0);
		}
		cout << c << endl;
	}
}