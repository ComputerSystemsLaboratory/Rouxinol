#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> s;
	int n;
	while(cin>>n){
		if(n==0){
			printf("%d\n",s.top());
			s.pop();
		}else{
		s.push(n);
		}
	}
	return 0;
}