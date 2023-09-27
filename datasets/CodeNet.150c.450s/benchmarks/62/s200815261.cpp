#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n=0;
	int i=0;
	priority_queue<int,vector<int>,greater<int> > q1;
	for(i=0;i<3;i++){
		cin>>n;
		q1.push(n);
	}
	for(i=0;i<2;i++){
		cout<<q1.top()<<" ";
		q1.pop();
	}
	cout<<q1.top()<<endl;
}