#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<cstdio>
using namespace std;

int main(){
	int n, a, b, c, x;

	while (cin >> n >> a >> b >> c >> x, n + a + b + c + x != 0){
		int y[100];
		for (int i = 0; i < n; i++){
			cin >> y[i];
		}

		int f = 0;
		int i = 0;

		while (true){
			if (f > 10000){
				cout << -1 << endl;
				break;
			}
			if (x == y[i]){
				i++;
				if (i == n){
					cout << f << endl;
					break;
				}
				
			}
			f++;
			x = (a*x + b) % c;
		}

	}

	return 0;
}