#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> int_pair;
typedef pair<ll,ll> ll_pair;
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I)
int c[]={500,100,50,10,5,1};
int cn[6];

int main(){
	int a;
	cin>>a;
	while(a){
		a=1000-a;
		FOR(i,0,6){
			cn[i]=a/c[i];
			a-=cn[i]*c[i];
		}
		int ans=0;
		FOR(i,0,6)ans+=cn[i];
		cout<<ans<<endl;
		cin>>a;
	}

	
	return 0;
}

