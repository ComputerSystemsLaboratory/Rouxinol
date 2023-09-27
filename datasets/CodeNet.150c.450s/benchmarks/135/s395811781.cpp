#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

bool solve(){
	int n,m;
	cin >> n >> m;
	if(n == 0 && m == 0)return false;
	vector<int> h(n+1),w(m+1);
	for(int i=1;i<=n;i++){
		cin >> h[i];
		h[i] += h[i-1];
	}
	for(int i=1;i<=m;i++){
		cin >> w[i];
		w[i] += w[i-1];
	}

	vector<int> hei(1500001);
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			hei[h[j]-h[i]]++;
		}
	}

	int cnt = 0;
	for(int i=0;i<=m;i++){
		for(int j=i+1;j<=m;j++){
			cnt += hei[w[j]-w[i]];
		}
	}
	cout << cnt << endl;
	return true;
}

int main(void){
	while(solve()){}
	return 0;
}

//????????????