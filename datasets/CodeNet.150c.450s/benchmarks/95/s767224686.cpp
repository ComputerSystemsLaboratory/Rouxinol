#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<list>
#include<queue>
#include<cmath>
#include<functional>
#include<algorithm>
#define INF (1<<29)
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


int main(){
	string s;
	int lu,ru,ld,rd;
	int n;
	while(cin>>n&&n){
		int ans=0;
		bool l=false,r=false;
		rep(i,n){
			cin>>s;
			if(s[0]=='l')l=!l;
			else r=!r;
			if(ans%2&&!l&&!r)ans++;
			else if(ans%2==0&&l&&r)ans++;

		}
		cout<<ans<<endl;
	}
	return 0;
}