#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

int main (){
	priority_queue<int> A;
	string s;
	int a;
	while(cin>>s){
		if(s[0]=='i') {
			cin>>a;
			A.push(a);
		}
		else if(s[1]=='x'){
			a=A.top();
			A.pop();
			cout<<a<<endl;
		}
		else return 0;
	}
	return 0;
}
