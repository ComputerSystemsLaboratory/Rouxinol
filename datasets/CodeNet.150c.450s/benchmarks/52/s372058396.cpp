#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
#define int long long
signed main(){
	stack<int> q;
	int a;
	while( scanf("%lld", &a) != EOF ){
		if(a==0){ cout << q.top() << endl; q.pop();}
		else q.push(a);
	}
	return 0;
}