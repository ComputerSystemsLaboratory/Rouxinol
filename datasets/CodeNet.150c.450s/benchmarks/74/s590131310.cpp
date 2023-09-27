#include <iostream>

using namespace std;

const int N = 50000, M = 20;

int count[N + 1], money[M];

int main(){
	int n, m;
	for(int i = 0;i <= N;++i){
		count[i] = M + M;
	}
	cin >> n >> m;
	for(int i = 0;i < m;++i){
		cin >> money[i];
		for(int j = money[i], k = 1; j <= N; j += money[i], ++k){
			count[j] = k;
		}
	}
	for(int i = 1;i <= n;++i){
		if(count[i] != M + M){
			int c = count[i] + 1;
			for(int j = 0;j < m;++j){
				if(i + money[j] <= n)
				count[i + money[j]] = count[i + money[j]] > c ? c : count[i + money[j]];
			}
		}
	}
	cout << count[n] << endl;
	return 0;
}