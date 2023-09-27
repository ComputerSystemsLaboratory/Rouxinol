#include <iostream>
#include <cstdlib>
#include <string>
#include <queue>
using namespace std;

int main(void){

	priority_queue <int> X;
	string text;
	int n;

	while (true){
		cin>>text;
		if (text[2] == 'd'){
			break;
		}
		else if (text[0] == 'i'){
			cin>>n;
			X.push(n);
		}
		else if (text[0] == 'e'){
			cout<<X.top()<<endl;
			X.pop();
		}
	}
	return 0;
} 