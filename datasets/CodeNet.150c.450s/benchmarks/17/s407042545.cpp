#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;
int main(){
	int i,a;
	priority_queue<int> q1;
	for(i=0;i<5;i++){
		cin>>a;
		q1.push(a);
	}
	for(i=0;i<5;i++){
		a=q1.top();
		q1.pop();
		printf("%d%c",a,i==4?'\n':' ');
	}
	return 0;
}