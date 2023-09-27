#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

const int MAX = 1000;

int main(){
	int N;	
	while(cin >> N, N) {
		int ans=0, tmp=0;	
		
		for(int i = 1; i < N; ++i) {
			tmp = 0;	
			for(int j = i; j < N; ++j) {
				tmp += j;
				if(tmp == N) {
					++ans;
					break;
				}
				else if(tmp > N) break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}