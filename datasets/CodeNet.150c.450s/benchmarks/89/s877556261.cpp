#include <iostream>
#include <cmath>
#include <vector>

#define N 1000000
using namespace std;

vector<int> p(1000000);

int main(){
	int a, d, n;
	for(int i = 0; i < N; i++) p[i] = 0;
	for(int i = 3; i < N; i += 2) p[i] = 1;
	p[2] = 1;
	for(int i = 3; i < (int)sqrt(N); i += 2){
		if(p[i] == 0) continue;
		for(int j = i + i; j <= N; j = j + i) p[j] = 0;
	}		
	
	while(cin >> a >> d >> n, a != 0 && d != 0 && n != 0){
		int pr;
		for(int i = 0, j = 0; j < n; ){
			if(p[a + i * d]){
				pr = a + (i * d);
				j++;
			} 
		i++;
		}		
	cout << pr << endl;
	}	
	return 0;
}