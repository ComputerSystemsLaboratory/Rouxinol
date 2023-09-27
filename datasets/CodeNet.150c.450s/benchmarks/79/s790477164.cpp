#include <iostream>
#include <cstdio>
#include <queue>
#define INF 1e+18
#define int long long
using namespace std;

signed main(){
	int n,r;
	while(cin >> n >> r,n){
		int card[50];
		for(int i = 0;i < n;i++) card[i] = n - i;
		queue<int> que;
		for(int i = 0;i < r;i++){
			int a,b;
			cin >> a >> b;
			for(int j = 0;j < a - 1;j++) que.push(card[j]);
			for(int j = a - 1;j < a + b - 1;j++) card[j - a + 1] = card[j];
			for(int j = b;j < a + b - 1;j++){
				 card[j] = que.front();
				 que.pop();
			}
		}
		cout << card[0] << endl;
	}
	return 0;
}