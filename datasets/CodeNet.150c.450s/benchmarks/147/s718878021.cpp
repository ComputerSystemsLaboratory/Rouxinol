#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(false);

	int N; cin>>N;
	vector<int> vec(N+1);
	for(int x=1; x*x<=N; x++){
		for(int y=1; y*y<=N; y++){
			for(int z=1; z*z<=N; z++){
				if(x*x + y*y + z*z + x*y + y*z + z*x > N) break;
				vec[x*x + y*y + z*z + x*y + y*z + z*x]++;
			}
		}
	}
	for(int i=1; i<=N; i++){
		cout << vec[i] << endl;
	}

}
