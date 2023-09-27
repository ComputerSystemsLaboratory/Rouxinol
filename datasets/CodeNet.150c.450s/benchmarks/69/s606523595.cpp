#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int n;
	cin>>n;
	rep(k,0,n){
		int d[10]={},a[11]={},b[11]={},at=0,bt=0;
		rep(i,0,10) cin>>d[i];
		bool f=1;
		rep(i,0,10){
			if(a[at]<d[i]){
				a[at+1]=d[i]; at++;
			}else if(b[bt]<d[i]){
				b[bt+1]=d[i]; bt++;
			}else{
				f=0; break;
			}
		}
		cout<<(f?"YES":"NO")<<endl;
	}
}