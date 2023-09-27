#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
using namespace std;

int pn[1000000] = { 1, 1, 0 };

int main(){
	for (int i = 2; i < 1000000; i++){
		if (pn[i] == 1) continue;
		for (int j = i * 2; j < 1000000; j += i){
			pn[j] = 1;
		}
	}
	
	int n;

	while (cin >> n){
		int c = 0; 
		for (int i = 0; i <= n; i++){
			if (pn[i] == 0)
				c++;
		}
		cout << c << endl;
	}
	return 0;
}