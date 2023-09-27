#include <iostream>
using namespace std;
#define rep(i,n)	for(int i=0;i<n;i++)
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;	cin>>n;
	int s[n];
	rep(i,n)	cin>>s[i];
	int q;	cin>>q;
	int t,cou=0;
	rep(i,q){
		cin>>t;
		rep(j,n){
			if(s[j]==t){
				cou++;
				break;
			}
		}
	}
	cout<<cou<<endl;
	return 0;
}