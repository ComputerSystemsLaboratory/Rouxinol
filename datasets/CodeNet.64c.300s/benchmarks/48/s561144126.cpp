#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int hako[1000100];
int main(){
	int n;
	while(cin >> n){
		int ret = 0;
		REP(i,1000100)hako[i] = 0;
		for(int i=2;i<=n;i++){
			if(hako[i] == 1)continue;
			ret++;
			for(int j=i;j <= n;j+=i){
				hako[j] = 1;
			}
		}
		cout << ret << endl;
	}
	return 0;
}