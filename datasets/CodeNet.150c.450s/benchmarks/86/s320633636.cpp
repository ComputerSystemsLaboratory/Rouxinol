
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M, P, X;
	int i;
	double rate, sum;
	
	cin >> N >> M >> P;
	while(N!=0 || M!=0 || P!=0){
		vector<int> v;
		sum=0.0;
		rate=100-P;
		
		for(i=0; i<N; ++i){
			cin >> X;
			sum+=100*X;
			v.push_back(X);
		}
		sum=sum*rate/100/v[M-1];
		
		if(v[M-1]==0) cout << 0 << endl;
		else cout << (int)sum << endl;
		
		cin >> N >> M >> P;
	}
	return 0;
}