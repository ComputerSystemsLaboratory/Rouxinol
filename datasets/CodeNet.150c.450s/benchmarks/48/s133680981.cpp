#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n != 0){
		int a;
		a = 1e9;
		for(int i = 0; i*i*i <= n; i++){
			for(int j = 0; j*j+i*i*i <= n; j++){
				int t =(n-i*i*i-j*j);
				if(t >= 0)a= min( i+j+t, a);
			}
		}
		cout << a<<endl;
		cin >> n;
	}
	return 0;
}
