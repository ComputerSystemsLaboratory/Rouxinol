#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> s;
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			cout<<s.top()<<endl;
			s.pop();
		}
		else{
			s.push(n);
		}
	}
	return 0;
}