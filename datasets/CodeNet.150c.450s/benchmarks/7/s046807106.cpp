#include<iostream>
#include<queue>
using namespace std;
priority_queue<int> q1;
int main(){
	int i,j;
	for(i=0;i<10;i++){
		cin>>j;
		q1.push(j);
	}
	for(i=0;i<3;i++){
		cout<<q1.top()<<endl;
		q1.pop();
	}
	return 0;
}