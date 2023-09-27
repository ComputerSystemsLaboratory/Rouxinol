#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <functional>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
typedef pair<int,int> P;
priority_queue<P,vector<P>,greater<P> > que;
int main(){
	while(true){
		int n;
		cin >> n;
		if(n==0) break;
		rep(i,n){
			string x,y;
			cin >> x >> y;
			int a=stoi(x.substr(0,2))*3600+stoi(x.substr(3,2))*60+stoi(x.substr(6,2));
			int b=stoi(y.substr(0,2))*3600+stoi(y.substr(3,2))*60+stoi(y.substr(6,2));
			que.push(P(b,0));
			que.push(P(a,1));
		}
		int now=0,ans=0;
		while(!que.empty()){
			P q=que.top();
			que.pop();
			if(q.second==0) now++;
			else{
				if(now>0) now--;
				else ans++;
			}
		}
		cout << ans << endl;
	}
}