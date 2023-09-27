//ALDS 1_9_C
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
	
	priority_queue<int> S;
	string cmd;
	int key;

	while(1){
		cin>>cmd;

		if(cmd == "insert"){
			cin>>key;
			S.push(key);
		}

		if(cmd == "extract"){
			cout<<S.top()<<endl;
			S.pop();
		}

		if(cmd == "end")
			break;
	}

	return 0;
}