#include <iostream>
#include <algorithm>

#define rep(i,n) for(int i=0; i<(n); i++)

using namespace std;

int vx[] = {1,0,-1,0}, vy[] = {0,1,0,-1};

int main(){
	int N;
	while(cin >> N, N){
		int n, d;
		int mx[2]={}, my[2]={};
		int table[205][2] = {};
		rep(i,N-1){
			cin >> n >> d;
			table[i+1][0] = table[n][0] + vx[d];
			table[i+1][1] = table[n][1] + vy[d];
			mx[0] = min(mx[0], table[i+1][0]);
			mx[1] = max(mx[1], table[i+1][0]);
			my[0] = min(my[0], table[i+1][1]);
			my[1] = max(my[1], table[i+1][1]);
		}
		cout << mx[1] - mx[0] + 1 << " ";
		cout << my[1] - my[0] + 1 << endl;
	}
	return 0;
}