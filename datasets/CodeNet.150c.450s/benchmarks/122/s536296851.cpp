#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(){
	priority_queue<int> q;
	string str;
	int data;
	while(1){
		cin>>str;
		if(str=="end")	break;
		else if(str=="insert"){
			cin>>data;
			q.push(data);
		}
		else if(str=="extract"){
			cout<<q.top()<<endl;
			q.pop();
		}
	}
	return 0;
}