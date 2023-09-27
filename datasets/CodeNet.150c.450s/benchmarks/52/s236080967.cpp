#include<iostream>
#include<stack>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	stack<int> st;
	cin>>n;
	st.push(n);
	while(cin>>n){
		if(!n){
			cout<<st.top()<<endl;
			st.pop();
		}else{
			st.push(n);
		}
	}
	return 0;
}