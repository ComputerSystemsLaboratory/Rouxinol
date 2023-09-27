#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n != 0){
		int a,b,c;
		a = 1e9;
		b = pow(n,0.34);
		c = pow(n,0.5);
		for(int i = 0; i <= b; i++){
			for(int j = 0; j <= c*2; j++){
				int t =(n-i*i*i-j*j);
				if(t >= 0)a= min( i+j+t, a);
			}
		}
		cout << a<<endl;
		cin >> n;
	}
	return 0;
}
