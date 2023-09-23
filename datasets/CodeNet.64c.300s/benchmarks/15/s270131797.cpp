#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int a[110];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int cnt = 0;
	for(int i = 0; i < n; ++i){
		int minj = i;
		for(int j = i; j < n; ++j){
			if(a[j] < a[minj]){
				minj = j;
			}
		}
		if(i != minj){
			swap(a[i], a[minj]);
			++ cnt;
		}
	}

	for(int i = 0; i < n; ++i){
		cout << a[i];
		if(i != n - 1)
			cout << " ";
		else
			cout << endl;
	}
	cout << cnt << endl;

	return 0;
}