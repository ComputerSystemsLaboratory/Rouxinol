#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int x=0,y=100;
	stack<int> hor;
	char key;
	int S = 0, sum=0;
	int i = 0, tmp = 0;
	vector<pair<int, int> > p; //p(S,x)
	while (cin >> key) {
		x++;
		if (key == '\\') {
			hor.push(x);
		}else if(key == '/' && !hor.empty()) {
			tmp = hor.top();
			hor.pop();
			S = x - tmp;
			sum += S;
			while (!(p.empty()) && p.back().second > tmp) {
				S += p.back().first;
				p.pop_back();
			}
			p.push_back(make_pair(S, tmp));
		}
	}
	cout << sum << endl;
	cout << p.size() ;
	for (int i = 0; i < p.size(); i++) cout << ' ' << p[i].first;
	cout << endl;
}
