#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <stack>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
stack <int> s;
int main(){
	char t[100];
	int a,b;
	int ans;
	while(scanf("%s", t) != EOF){
		if(t[0] == '+'){
			a = s.top();s.pop();
			b = s.top();s.pop();
			s.push(a + b);
		}else if(t[0] == '-'){
			b = s.top();s.pop();
			a = s.top();s.pop();
			s.push(a - b);
		}else if(t[0] == '*'){
			a = s.top();s.pop();
			b = s.top();s.pop();
			s.push(a * b);
		}else{
			s.push(atoi(t));
		}
	}
	cout << s.top() << endl;
	return 0;
}