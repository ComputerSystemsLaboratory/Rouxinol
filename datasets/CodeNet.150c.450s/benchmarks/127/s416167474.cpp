#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
set<string> st;
int main(){
	int n;
	cin >> n;
	rep(i,n){
		st.clear();
		string s;
		cin >> s;
		int m=s.size();
		rep1(i,m-1){
			string x=s.substr(0,i),y=s.substr(i,m-i),rx=x,ry=y;
			reverse(rx.begin(),rx.end());
			reverse(ry.begin(),ry.end());
			st.insert(x+y);
			st.insert(x+ry);
			st.insert(rx+y);
			st.insert(rx+ry);
			st.insert(y+x);
			st.insert(y+rx);
			st.insert(ry+x);
			st.insert(ry+rx);
		}
		cout << st.size() << endl;
	}
}