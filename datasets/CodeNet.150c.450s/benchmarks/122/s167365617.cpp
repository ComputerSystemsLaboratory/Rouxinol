#include<iostream>
#include <queue>
#include <string>

using namespace std;
int main(){
	priority_queue<int,vector<int>,less<int> > r;
	string s;
	int key;
	while(true) {
		cin >> s;
		if (s == "insert") {
			cin >> key;
			r.push(key);
		} else if (s == "extract") {
			cout << r.top() << std::endl;
			r.pop();
		} else if (s== "end") {
			break;
		}
	}
}