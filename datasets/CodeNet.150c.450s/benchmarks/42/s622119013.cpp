#include <string>
#include <queue>
#include <iostream>
using namespace std;

typedef struct _process_ {
	string name;
	int time;
}process;

int main(void)
{
	int n, q;
	cin >> n;
	cin >> q;
	

	

	process p;
	queue<process> qu;

	for (int i = 0; i < n; i++) {
		cin >> p.name;
		cin >> p.time;
		qu.push(p);
	}

	int time = 0;

	for (int f = 0; f != n;){
		if (qu.front().time <= q){
			time += qu.front().time;
			cout << qu.front().name << " " << time << endl;
			qu.pop();
			f++;
		}
		else {
			p.name = qu.front().name;
			p.time = qu.front().time - q;
			qu.push(p);
			qu.pop();
			time += q;
		}
	}
	return 0;
}