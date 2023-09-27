#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

int c[101][10001];

struct ITEM{
	int v;
	int w;
};

int main(void){

	int n, max_w;

	cin >> n >> max_w;
	memset(c, 0, sizeof(c));

	ITEM item[101];
	item[0].v = 0; item[0].w = 0;
	for (int i = 1; i <= n; i++)
		cin >> item[i].v >> item[i].w;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= max_w; j++){
			if (j >= item[i].w)
				c[i][j] = max(c[i - 1][j], c[i - 1][j - item[i].w] + item[i].v);
			else c[i][j] = c[i - 1][j];
//			cout << c[i][j] << ' ';
		}
//		cout << endl;
	}
//	cout << "----------------" << endl;
	cout << c[n][max_w] << endl;

	return 0;
}