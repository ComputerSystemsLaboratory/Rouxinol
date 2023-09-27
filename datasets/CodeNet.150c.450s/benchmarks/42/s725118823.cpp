#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct process {
	string name;
	int time;
};

int main() {
	int n,time,limit,stamp=0;
	process temp;
	string proc;
	queue<process> todo,finish;
	cin >> n >> limit;
	for(int i=0; i<n; ++i) {
		cin >> proc >> time;
		temp.name = proc;
		temp.time = time;
		todo.push(temp);
	}
	while(!(todo.empty())) {
		temp=todo.front();
		todo.pop();
		if(temp.time>limit) {
			stamp+=limit;
			temp.time-=limit;
			todo.push(temp);
		} else {
			stamp+=temp.time;
			temp.time=stamp;
			finish.push(temp);
		}
	}
	for(int i=0; i<n; ++i) {
		temp=finish.front();
		finish.pop();
		cout << temp.name << " " << temp.time << endl;
	}
	return 0;
}