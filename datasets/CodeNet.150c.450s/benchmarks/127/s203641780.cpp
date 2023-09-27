#include<iostream>
#include<algorithm>
#include<set>
#include<string>
#define rep(i,n) for(int i=0;i<n;i++)
#define rv(c) reverse(c.begin(),c.end())
#define is(a) insert(a)
using namespace std;
int main(){
	int N; cin>>N;
	rep(n,N){
		string T,t[2]; set<string> s;
		cin>>T;
		rep(i,T.size()-1)rep(j,4){
			t[0]=T.substr(0,i+1),t[1]=T.substr(i+1);
			rep(k,2)if(j&(1<<k))rv(t[k]);
			s.is(t[0]+t[1]),s.is(t[1]+t[0]);
		}
		cout<<s.size()<<endl;
	}
	return 0;
}