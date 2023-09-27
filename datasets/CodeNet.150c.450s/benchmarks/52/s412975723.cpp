#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
	int n;
	stack<int> stk;
	queue<int> que;
	while(cin>>n){
		if(n==0){
			que.push(stk.top());
			stk.pop();
		}else{
			stk.push(n);
		}
	}
	while(!que.empty()){
		cout<<que.front()<<endl;
		que.pop();
	}
	return 0;
}