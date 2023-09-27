#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	cin>>n;
	lp(i,n){
		int y,m,d;
		cin>>y>>m>>d;
		int ans=0;
		while(1){
			if(y%3!=0 && m%2==0){
				if(d==20) break;
			}
			else if(d==21) break;
			ans++;
			d++;
		}
		m++;
		while(m!=11){
			if(y%3==0){
				ans+=20;
			}
			else if(m%2==0){
				ans+=19;
			}
			else ans+=20;
			m++;
		}
		y++;
		while(y!=1000){
			if(y%3==0) ans+=200;
			else ans+=195;
			y++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
