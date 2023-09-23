#include <iostream>

#define rep(i,n) for(int i=0; i<(n); i++)

using namespace std;

int main(){
	int N;
	while(cin >> N, N){
		int ans=0;
		rep(i,N){
			if( i == 0 ) continue;
			int sum = 0;
			rep(j,N){
				sum += i+j;
				if( sum >= N ) break;
			}
			if( sum == N ) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}