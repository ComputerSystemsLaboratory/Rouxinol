#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

int main(){
	queue<pair<string, int> > Q;
	int n, q, t = 0;
	cin >> n >> q;
	string name;
	int time;
	for (int i = 0; i < n; i++){
		cin >> name;
		cin >> time;
		pair<string, int> a(name, time);
		Q.push(a);
	}
	while (!Q.empty()){
		pair<string, int> current = Q.front();
		Q.pop();
		if (current.second - q > 0){
			current.second -= q;
			Q.push(current);
			t += q;
		}
		else {
			t += current.second;
			cout << current.first << " " << t << endl;
		}
	}

}