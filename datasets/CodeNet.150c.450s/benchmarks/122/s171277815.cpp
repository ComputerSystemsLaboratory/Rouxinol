#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
struct edge{int to;ll cost;};
typedef pair<ll,int> P;
const ll INF=1000000000000LL;
const ll MOD=1000000007LL;
const ll MAX=100010;
int main(){
	priority_queue<ll> q;
	string s;
	while(cin>>s){
		if(s=="end"){
			return 0;
		}
		int a;
		if(s=="insert"){
			int a;cin>>a;
			q.push(a);
		}else{
			cout<<q.top()<<endl;
			q.pop();
		}
	}
	return 0;
}

