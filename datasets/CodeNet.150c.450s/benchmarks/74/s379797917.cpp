#include <iostream>
#define INF 1000000
using namespace std;

int main(){
	int n,m,C[21];
	cin >> n >> m;
	int T[n+1];
	T[0] = 0;
	for(int i = 1;i <= n;i++){
		T[i] = INF;
	}
	for(int i = 0;i < m;i++){
		cin >> C[i];
		for(int j = C[i];j <= n;j++){
			T[j] = min(T[j],T[j-C[i]]+1);
		}
	}
	cout << T[n] <<endl;

	return 0;
}