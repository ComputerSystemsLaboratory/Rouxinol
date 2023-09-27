#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stack>
#define rep(x,to) for(x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;




int main(void){

stack<int> stk;
int ww;	

	while(cin >> ww){
		if(ww != 0){
			stk.push(ww);
		}else{
			cout << stk.top() << endl;
			stk.pop();
		}
	}
	return 0;
}