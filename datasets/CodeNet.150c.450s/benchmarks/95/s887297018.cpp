#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define fs first
#define sc second
#define show(x) cout << #x << " = " << x << endl
int main(){
	while(true){
		int n,cnt=0;
		cin>>n;
		if(n==0) break;
		bool l=false,r=false;
		bool d=true;
		rep(i,n){
			string s;
			cin>>s;
			if(s=="lu") l=true;
			if(s=="ld") l=false;
			if(s=="ru") r=true;
			if(s=="rd") r=false;
			if(d&&l&&r){
				cnt++;
				d=false;
			}else if(!d&&!l&&!r){
				cnt++;
				d=true;
			}
		}
		cout<<cnt<<endl;
	}
}