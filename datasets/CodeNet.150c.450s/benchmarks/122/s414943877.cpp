#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	priority_queue<int> pq;
	string command; cin>>command;
	int key;
	while(command!="end"){
		if(command=="insert"){
			cin>>key;
			pq.push(key);
		}else if(command=="extract"){
			cout<<pq.top()<<endl;
			pq.pop();
		}
		cin>>command;
	}
}