#include<iostream>
#include<stack>
using namespace std;

stack<int> s;
int n;

int main(){
	while(cin>>n){
		if(n==0) {
			cout<<("%d\n",s.top())<<endl;
			s.pop();
		}
		else{
			s.push(n);
		}
	}
	return 0;
}