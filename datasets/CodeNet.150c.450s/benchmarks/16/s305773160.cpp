#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>

using namespace std;

typedef pair<int,int> P1;
typedef pair<P1,int> P;

int main(){
	stack<int> s;
	stack<P> q;
	char c;
	int i=0,ans=0;
	while(cin>>c){
		if(c == '\\') s.push(i);
		else if(c == '/' && !s.empty()) {
			int j = s.top(),ws;
			s.pop();
			ws  = i-j;
			ans += ws;
			for(;!q.empty();){
				P w = q.top();
				if(w.first.first > j && w.first.second < i)	{
					q.pop();
					ws +=w.second;
				}
				else break;
			}
			q.push(P(P1(j,i),ws));
		}
		i++;
	}
	vector<P>v;
	cout << ans << endl << q.size() ;
	for(;!q.empty();){
		P w = q.top();q.pop();
		v.push_back(w);
	}
	std::reverse(v.begin(), v.end());
    for(P x : v ) std::cout << " " <<x.second ;
	cout << endl;
	return 0;
}