#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> s;
	int num;
	while(cin >> num){
		if(num == 0){
			cout << s.top() << endl;\
			s.pop();
		}else{
			s.push(num);
		}
	}
}