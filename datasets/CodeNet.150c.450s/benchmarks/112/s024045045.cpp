#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define mkp make_pair
#define F first
#define S second

int main(){
	int n;
	int m;
	// int a[40]={0};
	while(cin>>n,n){
		vector<pair<char,char> > v;
		rep(i,n){
			char t1,t2;
			cin>>t1>>t2;
			v.push_back(mkp(t1,t2));
		}
		cin>>m;
		rep(i,m){
			char t;
			cin>>t;
			rep(i,n){
				if(v[i].F==t){
					t=v[i].S;
					break;
				}
			}
			cout<<t;
		}
		cout<<endl;
	}
	return 0;
}