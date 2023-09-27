#include <iostream>
#include <queue>
using namespace std;

int main(){
	priority_queue<int> Q;
	string word;
	while (cin >> word) {		
		if (word == "insert"){
			int num;
			cin >> num;
			Q.push(num);
		}
		else if (word == "extract"){
			int n = Q.top();
			Q.pop();
			cout << n << endl;
		}
		else break;
	}
}