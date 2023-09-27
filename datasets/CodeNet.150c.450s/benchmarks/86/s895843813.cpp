#include<iostream>
using namespace std;

int main(){
	int n, m, p;
	int x[100];
	while(1){
		float ans = 0;
		for(int i=0; i < 100; i++) x[i] = 0;

		cin >> n >> m >> p;

		if((n | m | p) == 0) break;

		for(int i=0; i < n; i++){
			cin >> x[i];
			ans+= x[i];
		}
		if(x[m-1] == 0){
			cout << 0 << endl;
			continue;
		}

		ans *= (100.0 - p) / x[m-1];

		cout << (int)ans << endl;
	}

}