#include <bits/stdc++.h>
using namespace std;

int main(){
	int t[40];
	t[0] = 1;
	int n;
	cin >> n;
	while(n!=0){
		for(int i = 1; i < 40; i++)t[i] = 0;
		for(int i = 0; i < n; i++){
			t[i+1] += t[i];
			t[i+2] += t[i];
			t[i+3] += t[i];
		}
		cout << ceil((double)t[n]/3650) << endl;
	cin >> n;
	}
}
