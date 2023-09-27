#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <stack>
#include <queue>
#include <cctype>

using namespace std;

struct process{
	string name;
	int time;
};

int main(){
	int n, q, t = 0;
	process p;
	queue<process> que;
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> p.name >> p.time;
		que.push(p);
	}
	while (!que.empty()){
		p = que.front();
		que.pop();
		if (p.time > q){
			p.time -= q;
			que.push(p);
			t += q;
		}
		else {
			t += p.time;
			cout << p.name << " " << t << endl;
		}
	}
}