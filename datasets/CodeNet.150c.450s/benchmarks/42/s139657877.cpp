#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Process{
	string name;
	long t;
};

int main(){
	queue<Process> qu;
	long n, q;
	cin >> n >> q;
	for (long i = 0; i < n; i++){
		string name;
		long t;
		cin >> name >> t;
		Process p;
		p.name = name;
		p.t = t;
		qu.push(p);
	}
	long cl = 0;
	while (qu.empty() == 0){
		Process p;
		p = qu.front();
		if (p.t > q){
			cl += q;
			p.t -= q;
			qu.pop();
			qu.push(p);
		}
		else {
			cl += p.t;
			qu.pop();
			cout << p.name << " " << cl << endl;
		}
	}
	return 0;
}