#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int n;

int main(){
	while(cin>>n&&n){
		priority_queue<pair<int,int> > q;
		int h1,m1,s1,h2,m2,s2,ans=0,cur=0;
		char c;
		rep(i,n){
			cin>>h1>>c>>m1>>c>>s1>>h2>>c>>m2>>c>>s2;
			q.push(make_pair(h1*3600+m1*60+s1,1));
			q.push(make_pair(h2*3600+m2*60+s2,0));
		}
		while(!q.empty()){
			if(q.top().second)cur--;
			else cur++;
			q.pop();
			ans=max(ans,cur);
		}
		cout<<ans<<endl;
	}
}