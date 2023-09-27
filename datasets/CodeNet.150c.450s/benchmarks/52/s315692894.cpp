#include<bits/stdc++.h>
using namespace std;
stack<int> s;
signed main(void){
	ios::sync_with_stdio(false);
	int x;
	while(cin>>x){
		if(x)
			s.push(x);
		else{
			cout<<s.top()<<endl;
			s.pop();
		}
	}
}