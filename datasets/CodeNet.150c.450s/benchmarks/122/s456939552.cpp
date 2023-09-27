#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	priority_queue<int> pq;
	string ope;
	int num;
	cin >> ope;
	while (ope != "end"){
		if (ope == "extract"){
			cout << pq.top() << endl;
			pq.pop();
		}else if (ope == "insert"){
			cin >> num;
			pq.push(num);
		}
		cin >> ope;
	}
	return 0;
}