#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;
const int N = 1000007;

int Eratos[N];
void era(){
	for(int i=0; i<N; i++){
		Eratos[i] = 1;
	}

	Eratos[0] = Eratos[1] = 0;
	for(int i=2; i*i <= N; i++){
		if(Eratos[i] != 1) continue;
		for(int j=2; i*j < N; j++){
			Eratos[i*j] = 0;
		}
	}
}

int main(void) {
	era();
	while(1){
		int a, d, n;
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0) break;

		int cnt = 0;
		for(int i=0; ; i++){
			int s = a + d*i;
			if(Eratos[s] == 1) cnt++;
			if(cnt == n){
				cout << s << endl;
				break;
			}
		}
	}
	return 0;
}