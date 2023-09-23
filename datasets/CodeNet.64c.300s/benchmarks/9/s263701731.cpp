#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int y = 100000;
	for(int i = 0 ; i < n ; i++){
		y = y * 105 / 100;
		if( y % 1000 ) y += 1000 - y % 1000;
	}
	cout << y << endl;
}