#include "iostream"
#include "stack"
#include "vector"
#include "algorithm"

using namespace std;

struct Mizu {
	int pos, val;
};

int main() {

	stack<int> s;
	stack<Mizu> each;

	char input[20001];
	int ans = 0;

	cin >> input;

	for (int i = 0; ; i++) {
		if (input[i] == '\\') {
			s.push(i);
		}
		else if (input[i] == '/') {
			if (!s.empty()) {
				ans += i - s.top();

				Mizu biger;
				biger.pos = s.top();
				biger.val = 0;

				while (!each.empty()) {
					if (each.top().pos < s.top()) {
						break;
					}
					Mizu m;
					m = each.top();
					each.pop();

					biger.pos = m.pos;
					biger.val += m.val;
					
				}
				biger.val += i - s.top();
				each.push(biger);
				s.pop();
			}
		}
		else if (input[i] == '_');
		else break;
	}

	cout << ans << endl;

	vector<int> v;

	while (!each.empty()) {
		v.push_back(each.top().val);
		each.pop();
	}

	reverse( v.begin(), v.end() );

	cout << v.size();
	if (v.size() > 0) {
		for (int i = 0; i < v.size(); i++) {
			cout << " " << v[i] ;
		}
	}

	cout << endl;

	return 0;
}