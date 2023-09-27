#include <iostream>
#include <queue>

using namespace std;

int p[100+10][100+10];
int D[100+10],e[100+10];
int n,a,b,c;

int main(){
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a >> b;
		for (int j=1; j<=b; j++){
			cin >> c;
			p[a][c] = 1;
		}
	}
	for (int i=1; i<=n; i++){
		D[i] = -1;
	}
	
	queue<int> Q;
	Q.push(1);
	D[1] = 0;
	e[1] = 1;
	while(!Q.empty()){
		int m = Q.front();
		Q.pop();
		for (int i=1; i<=n; i++){
			if (p[m][i]==1 && e[i]==0){
				D[i] = D[m]+1;
				Q.push(i);
				e[i] = 1;
			}
		}
	}
	
	for (int i=1; i<=n; i++){
		cout << i << ' ' << D[i] << endl;
	}
}