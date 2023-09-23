#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;

int a[101];

int solve(int n){
	int c = 0;
	int b = 1;
	int damy;
	if (n == 1)return c;
	while (1){
		int f = 0;
		for (int i = n - 1; i >= 0; i--){
			if (a[i] < a[i - 1]){
				c++;
				f++;
				damy = a[i - 1];
				a[i - 1] = a[i];
				a[i] = damy;
				if (i - 1 == 0)break;
			}
			else if (f>0 && a[i] >= a[i - 1])break;
			else if (i == 1 && f == 0)return c;

		}



	}
	

}


int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	int c = solve(n);
	for (int i = 0; i < n; i++){
		if (i != n - 1)cout << a[i]<<' ';
		else cout << a[i] << endl;
	}
	cout << c << endl;
	return 0;

}