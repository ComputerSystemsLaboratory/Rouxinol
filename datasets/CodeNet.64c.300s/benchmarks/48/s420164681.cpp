#include <bits/stdc++.h>
using namespace std;

int p[1000010];

int main(){
	int n;
	
	for(int i = 2 ; i <= 1000000 ; i++){
		p[i] = 1;
		for(int j = 2 ; j*j <= i ; j++){
			if( i % j == 0 ){
				p[i] = 0;
				break;
			}
		}
		p[i] += p[i-1];
	}
	
	while(cin >> n){
		cout << p[n] << endl;
	}
}