#include <iostream>
#define N 50
using namespace std;
int main(){
	int n, r, p, c, i, j, card[N+1], memo[N+1];
	while(cin >> n >> r, n){
		for(i = 1; i <= n; i++) card[i] = n - i + 1;
		for(i = 0; i < r; i++){
			cin >> p >> c;
			for(j = 1; j < p; j++) memo[j] = card[j];
			for(j = 1; j <= c; j++) card[j] = card[p + j - 1];
			for(j = 1; j < p; j++) card[c + j] = memo[j];
		}
	cout << card[1] << endl;
	}
	return 0;
}