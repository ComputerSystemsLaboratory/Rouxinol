#include<iostream>
#include<algorithm>

using namespace std;
typedef long long Int;

Int n, m, h[2000], w[2000];
Int res;
Int cnt[1080000];
int main(){
	while(true){
		res = 0;
		for(int i = 0;i < 1080000;i++)cnt[i] = 0;
		cin >> n >> m;
		if(n == 0 && m ==0)return 0;
		for(int i = 1;i <= n;i++){
			cin >> h[i];
			h[i] += h[i-1];
		}
		for(int i = 0;i < n;i++){
			for(int j = i+1;j <= n;j++){
				cnt[abs(h[i]-h[j])]++;
			}
		}
		for(int i = 1;i <= m;i++){
			cin >> w[i];
			w[i] += w[i-1];
		}
		for(int i = 0;i < m;i++){
			for(int j = i+1;j <= m;j++){
				res += cnt[abs(w[i]-w[j])];
			}
		}
	cout << res << endl;
	}

}