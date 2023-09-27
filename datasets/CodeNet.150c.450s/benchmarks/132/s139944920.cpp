#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define MAX_N 50

using namespace std;

int n, p;
int d[MAX_N];

void solve() {
	for (int i = 0; i < n; i++)
	{
		d[i] = 0;
	}
	int w = p;
	while(1){
		for (int i = 0; i < n; i++)
		{
			if(w > 0){
				d[i]++;
				w--;
				if(w == 0 && d[i] == p){
					cout << i << endl;
					return;
				}
			}else{
				w = d[i];
				d[i] = 0;
			}
		}
	}
}

int main(){
	while(1){
		cin >> n >> p;
		if(n == 0 && p == 0) break;
		solve();
	}
	return 0;
}