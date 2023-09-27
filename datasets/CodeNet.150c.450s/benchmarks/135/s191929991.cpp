#include <bits/stdc++.h>
using namespace std;
#define M 1500*1000

int h_pos[M+1];
int w_pos[M+1];

int main(){
	int n,m;
	while(cin >> n >> m , n | m ){
		vector<int> h(n) , w(m);
		memset(h_pos , 0 , sizeof(h_pos));
		memset(w_pos , 0 , sizeof(w_pos));
		for(int i=0;i<n;++i){
			cin >> h[i];
		}
		for(int i=0;i<m;++i){
			cin >> w[i];
		}
		
		
		for(int i=0;i<n;++i){
			int sum=0;
			for(int j=i;j<n;++j){
				sum+=h[j];
				h_pos[sum]++;
			}
		}
		for(int i=0;i<m;++i){
			int sum=0;
			for(int j=i;j<m;++j){
				sum+=w[j];
				w_pos[sum]++;
			}
		}
		int cnt=0;
		for(int i=0;i<=M;++i){
			cnt+=h_pos[i]*w_pos[i];
		}
		cout << cnt << endl;
	}
	return 0;
}