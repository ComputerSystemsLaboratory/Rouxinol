#include <iostream>
#include <queue>

using namespace std;

const int Inf = 10000*100000+100;
int V,E,R,S,T[500000+10],D[500000+10],H[500000+10],N[500000+10];
int C[100000+10],P[100000+10];

int main() {
	queue<int> Q;
	cin >> V >> E >> R;
	for (int i=1; i<=E; i++){
		cin >> S >> T[i] >> D[i];
		N[i] = H[S];
		H[S] = i;
	}
	fill(C,C+100010,Inf);
	C[R] = 0;
	Q.push(R);
	P[R] = 1;
	while(!Q.empty()){
		int u = Q.front();
		Q.pop();
		P[u] = 0;
		for (int i=H[u]; i; i=N[i]){
			int t = T[i];
			if (C[t] > C[u] + D[i]){
				C[t] = C[u]+D[i];
				if (!P[t]){
					Q.push(t);
					P[t] = 1;
				}	
			}
		}
	}
	
	for (int i=0; i<V; i++){
		if (C[i] < Inf){
			cout << C[i] << endl;
		}else{
			cout << "INF" << endl;
		}
	}	
}