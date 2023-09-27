#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
	string ref;
	int in;
	priority_queue<int> prq;
	while(1){
		cin >> ref;
		if(ref=="insert"){
			cin >> in;
			prq.push(in);
		}else if(ref=="extract"){
			in=prq.top();
			prq.pop();
			cout << in << endl;
		}else if(ref=="end"){
			break;
		}
	}
	return 0;
}
