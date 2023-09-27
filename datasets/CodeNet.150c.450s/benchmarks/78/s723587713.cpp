#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int a[1000001], b[1000001];

int main(){
	
	for(int i = 0; i <= 1000000; i++){
		a[i] = 1000000;
		b[i] = 1000000;
	}
	
	a[0] = 0;
	b[0] = 0;
	
	for(int num = 1; num < 200; num++){
		int p = num * (num + 1) * (num + 2) / 6;
		if(p % 2 == 1){
			for(int i = 0; i <= 1000000 - p; i++){
				a[i + p] = min(a[i + p], a[i] + 1);
			}
		}
		for(int i = 0; i <= 1000000 - p; i++){
			b[i + p] = min(b[i + p], b[i] + 1);
		}
	}
	
	int N;
	
	while(true){
		cin >> N;
		if(N == 0){
			break;
		}
		cout << b[N] << " " << a[N] << endl;
	}
	
	return 0;
}