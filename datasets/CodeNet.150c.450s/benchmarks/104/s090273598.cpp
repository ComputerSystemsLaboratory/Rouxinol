#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	int w, n, a[30][30], ans[30];
	cin >> w >> n;
	for(int i = 0;i < w;i++)
	for(int j = 0;j < n;j++)a[i][j] = -1;
	for(int i = 0;i < n;i++){
		int x, y;
		scanf("%d,%d", &x, &y);
		a[x-1][i] = y-1;
		a[y-1][i] = x-1;
	}
	for(int i = 0;i < w;i++){
		int x = i;
		for(int j = 0;j < n;j++){
			if(a[x][j] != -1)x = a[x][j];
		}
		ans[x] = i+1;
	}
	for(int i = 0;i < w;i++)cout << ans[i] << endl;
	return 0; 
}