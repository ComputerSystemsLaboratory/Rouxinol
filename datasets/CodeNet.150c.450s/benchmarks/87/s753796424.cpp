#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define MAX_H 10

using namespace std;

int s[5][MAX_H+1];
int H;

void solve() {
	int point = 0, pre = 0;
	while(1){
		pre = point;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if(s[j][i] == s[j+1][i] && s[j+1][i] == s[j+2][i]){
					int p = s[j][i];
					for (int k = j; k < 5; k++)
					{
						if(s[k][i] != p) break;
						s[k][i] = 0;
						point += p;
					}
				}
			}
		}
		if(point == pre) break;
		for (int i = 0; i < 5; i++)
		{
			for (int j = H-1; j >= 0 ; j--)
			{
				if(s[i][j] == 0){
					for (int k = j-1; k >= 0; k--)
					{
						if(s[i][k] != 0){
							s[i][j] = s[i][k];
							s[i][k] = 0;
							break;
						}
					}
				}
			}
		}
	}
	cout << point << endl;
	return;
}

int main(){
	while(1){
		cin >> H;
		if(H == 0) break;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> s[j][i];
			}
		}
		solve();
	}
	return 0;
}