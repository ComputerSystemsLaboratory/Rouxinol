#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int> > q1;
	priority_queue<int > q2;
	int a=0;
	int b=0;
	int i=0;
	long long int x=0;
	
	cin>>a;
	for(i=0;i<a;i++){
		cin>>b;
		q1.push(b);
		q2.push(b);
		x+=b;
	}
	cout<<q1.top()<<" "<<q2.top()<<" "<<x<<endl;
}