#include <iostream>
#include <algorithm>
#include <cstring>

#define MAX 1500001

using namespace std;

int tate[MAX], yoko[MAX];

int main( void )
{
	int n, m;
	int h[1500], w[1500];
	while(cin >> n >> m, n | m) {
		int sum_all_h, sum_all_w;
		sum_all_h = sum_all_w = 0;
		for(int i=0; i < n; ++i) { cin >> h[i]; sum_all_h += h[i]; }
		for(int i=0; i < m; ++i) { cin >> w[i]; sum_all_w += w[i]; }
		memset(tate, 0, sizeof(tate));
		memset(yoko, 0, sizeof(yoko));
		int size = max(sum_all_h+1, sum_all_w+1);
		for(int i=0; i < n; ++i) {
			if(i) sum_all_h -= h[i-1];
			int sum_h = sum_all_h;
			++tate[sum_h];
			for(int j=n-1; j > i; --j) {
				sum_h -= h[j];
				++tate[sum_h];
			}
		}
		for(int i=0; i < m; ++i) {
			if(i) sum_all_w -= w[i-1];
			int sum_w = sum_all_w;
			++yoko[sum_w];
			for(int j=m-1; j > i; --j) {
				sum_w -= w[j];
				++yoko[sum_w];
			}
		}
		int answer = 0;
		for(int i=1; i < size; ++i) {
			answer += tate[i] * yoko[i];
		}
		cout << answer << endl;
	}

	return 0;
}