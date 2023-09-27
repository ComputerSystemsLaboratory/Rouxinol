#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

typedef struct {
	int v, h;
	bool f;
}P;

stack<int> s;
vector<P> s2;
string str;

int main(){
	cin >> str;
	int ans = 0, h = 0, t;
	P v, u;
	for (int i = 0; i < str.size(); i++) {
		switch (str[i]) {
		case'\\':
			s.push(i);
			h--;
			break;
		case'/':
			if (!s.empty()) {
				t = i - s.top();
				ans += t;
				s.pop();
				s2.push_back({ t,h,true });
				while (s2.size() >= 2) {
					v = s2.back(); s2.pop_back();
					u = s2.back(); s2.pop_back();
					if (v.h > u.h && u.f) {
						v.v += u.v;
						s2.push_back(v);
					}
					else {
						s2.push_back(u);
						s2.push_back(v);
						break;
					}
				}
			}
			else if(!s2.empty()) {
				s2.back().f = false;
			}
			h++;
			break;
		default:
			break;
		}
	}
	cout << ans << endl;
	cout << s2.size();
	for (int i = 0; i < s2.size(); i++) {
		cout << " " << s2[i].v;
	}
	cout << endl;

	return 0;
}