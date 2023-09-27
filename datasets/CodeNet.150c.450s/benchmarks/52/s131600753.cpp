#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	int n;
	stack<int> st;
	while(cin >> n){
		if(n != 0){
			st.push(n);
		}
		else{
			cout << st.top() << endl;
			st.pop();
		}
	}
	
	return 0;
}