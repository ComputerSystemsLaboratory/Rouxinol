#include<bits/stdc++.h>
using namespace std;
#define fo(nn) for(int ii = 0; ii < nn; ii++)

int main(){
	int n, m, D, P;
	
	while(1){
		int p[20] = {}, ans = 0;
		cin>>n>>m;
		
		if(n == 0 && m == 0) break;
		
		fo(n){
			cin>>D>>P;
			p[P] += D;
		}
		
		for(int i = 10; i; i--){//cout<<ans<<" A "<<i<<" "<<p[i]<<" "<<m<<endl;
			if(m >= p[i]){
				m -= p[i];
			} else if(m == 0){
				ans += p[i] * i;
			} else {//cout<<ans<<" "<<p[i]<<" "<<m<<" "<<i<<endl;
				ans += (p[i] - m) * i;
				m = 0;
			}//cout<<ans<<" "<<i<<" "<<p[i]<<" "<<m<<endl;
		}
		cout<<ans<<endl;
	}

	return 0;
}

