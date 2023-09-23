#include<iostream>
using namespace std;

int main(){
	int y[100], m[100], d[100];
	int n;
	int ans[100];

	for(int i=0; i <100; i++) ans[i] = 0;

	cin >> n;
	for(int i=0; i < n; i++) cin >> y[i] >> m[i] >> d[i];


	for(int i=0; i < n; i++){
		if(y[i] % 3 == 0 || m[i] % 2 == 1) ans[i] = 20 - d[i] + 1;
		else ans[i] = 19 - d[i] + 1;
		for(int j=y[i]; j < 1000; j++){
			for(int k = 1; k <= 10; k++){
				if(j == y[i] && k <= m[i]) continue;

				if(j % 3 == 0 || k % 2 == 1) ans[i] += 20;
				else ans[i] += 19;
			}
		}
	}

	for(int i=0; i < n; i++) cout << ans[i] << endl;
}