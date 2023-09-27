#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n,m,l,i,j,p;
	int f[1000][1000];
	int D[1000] = {};
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> m;
		cin >> p;
		for(j = 0; j < p; j++){
			cin >> l;
			f[m][l] = 1;
		}
	}
	queue<int> Q;
	Q.push(1);
	while(!Q.empty()){
		int c = Q.front();
		Q.pop();
		for(i = 2; i <= n; i++){
			if(f[c][i] == 1 && D[i] == 0){
				D[i] = D[c] + 1;
				Q.push(i);
			}
		}
	}				
	for(i = 1; i <= n; i++){
		if (D[i] == 0 && i !=1)
			D[i] = -1;
		cout << i << " " << D[i] << endl;
	}
}	