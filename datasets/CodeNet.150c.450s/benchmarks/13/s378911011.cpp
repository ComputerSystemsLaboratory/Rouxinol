#include <bits/stdc++.h>
#define endre getchar();getchar();return 0
#define INF 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define P pair<int,int>
#define prique(T) priority_queue<T,vector<T>,greater<T>>
#define vecunique(vec) sort(vec.begin(), vec.end());decltype(vec)::iterator result = std::unique(vec.begin(), vec.end());vec.erase(result, vec.end())
using namespace std;
signed main(){
	string s,p;
	cin>>s>>p;
	s=s+s;
	for(int i=0;i<=s.size()-p.size();i++){
		if(s.substr(i,p.size())==p){
			puts("Yes");
			return 0;
		}
	}
	puts("No");
	return 0;
}
