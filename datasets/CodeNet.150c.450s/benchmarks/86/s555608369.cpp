#include <iostream>

using namespace std;

int main(){
	int N, M, P;
	
	while(cin >> N >> M >> P, N+M+P){
		int x[N], sum = 0, ans = 0;
		for(int i = 0; i < N; ++i){
			cin >> x[i];
			sum += 100 * x[i];
		}
		sum =  sum * (100 - P) * 0.01;
		if(x[M - 1] != 0)
			ans = sum / x[M - 1];
		cout << ans << endl;
	}
}