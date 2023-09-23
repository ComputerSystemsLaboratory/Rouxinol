#include<iostream>
#define MAX_N 100
using namespace std;

int n, u, k, v;
int Adj[MAX_N][MAX_N];

void initialize(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			Adj[i][j] = 0;
		}
	}
}

void check_adj(){
	Adj[u][v] = 1;
}

void print_adj(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << Adj[i][j];
			if(j == n - 1) cout << endl;
			else cout << " ";
		}
	}
}

int main(void){
	cin >> n;
	initialize();
	for(int i = 0; i < n; i++){
		cin >> u;
		u--;
		cin >> k;
		for(int j = 0; j < k; j++){
			cin >> v;
			v--;
			check_adj();
		}
	}
	print_adj();

	return 0;
}