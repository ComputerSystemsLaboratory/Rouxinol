#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int N,W;
	cin >> N >> W;
	int V[101][10001]={0};
	for (int i=1; i<=N; i++){
		int v,w;
		cin >> v >> w;
		for (int j=0; j<=10000; j++){
			if (j<w) V[i][j]=V[i-1][j];
			else if (V[i-1][j]<V[i-1][j-w]+v) V[i][j]=V[i-1][j-w]+v;
			else V[i][j]=V[i-1][j];
		}
	}
	cout << V[N][W] << endl;
}