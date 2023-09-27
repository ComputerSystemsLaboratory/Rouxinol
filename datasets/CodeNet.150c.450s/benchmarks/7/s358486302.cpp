#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
	priority_queue<int> pq;
	for(int i=0,x;i<10;i++)
		cin>>x,pq.push(x);
	for(int i=0;i<3;i++,pq.pop())
		cout<<pq.top()<<endl;
	return 0;
}