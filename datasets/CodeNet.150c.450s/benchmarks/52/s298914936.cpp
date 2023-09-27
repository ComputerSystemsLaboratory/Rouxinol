
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;


bool solve(){
	stack<int> stk;
	int a;
	
	while(cin>>a){
		if(a){
			stk.push(a);
		}else{
			cout<<stk.top()<<endl;
			stk.pop();
		}
	}

	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(5);
	solve();

	return 0;
}

 