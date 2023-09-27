#include<iostream>
#include<stack>
using namespace std;

int main(){
	int x;
	stack<int> S;
	while(1){
		cin>>x;
		if(x==0){
			if(S.empty())break;
			cout<<S.top()<<endl;
			S.pop();
		}else{
			S.push(x);
		}
	}
	return 0;
}