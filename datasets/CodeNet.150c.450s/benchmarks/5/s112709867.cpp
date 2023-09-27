#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n,a;
	cin>>n;
	stack<int> A;
	for(int i=0;i<n;i++){
		cin>>a;
		A.push(a);
	}
	for(int i=0;i<n;i++){
		int fuga = A.top();
		if(i<n-1)
			cout<<fuga<<" ";
		else
			cout<<fuga;
		A.pop();
	}
	cout<<endl;
	return 0;
}