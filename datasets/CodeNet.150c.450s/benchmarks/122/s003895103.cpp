#include<iostream>
#include<queue>
#include<iostream>
using namespace std;

int main() {

	string op;
	priority_queue<int> PQ;
    int key;
	while( cin >> op ) {
		if ( op == "insert" ) {
			cin >> key;
			PQ.push( key );
		} else if ( op == "extract" ) {
			 cout << PQ.top() <<endl;
			 PQ.pop();
	         
	  		} else if ( op == "end" ) break;
	}
	return 0;
}
