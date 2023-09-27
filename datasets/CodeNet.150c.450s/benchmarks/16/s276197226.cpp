#include<iostream>
#include<stack>
#include<cstring>
#include<cstdio>
using namespace std;
	struct slayer {
		int S;				//S=ri-l
		int Li;
	};
int main() {
	char ch;
	stack<int> cal;
	stack<slayer> area;
	int sum = 0;
	for (int i = 0; ch=getchar(); i++) {
		if (ch == '\\') {
			cal.push(i);
		}
		else if (ch == '/') {
			if (cal.empty())
				continue;
			
			int temp = cal.top();			

			slayer s{0,temp};
			
			while (!area.empty() && area.top().Li > cal.top()) {
				s.S += area.top().S;
				area.pop();
			}
			cal.pop();
			s.S += (i - temp);
			sum += (i - temp);
			area.push(s);
		}
		else if (ch == '\n')break;
	}
	if (!area.empty()) {
		cout << sum << endl;
		cout << area.size() << " ";
		int* arr = new int[area.size()];
		int i;
		for (i = 0; !area.empty(); i++) {
			arr[i] = area.top().S;
			area.pop();
		}
		i--;
		for (; i > 0; i--) {
			cout << arr[i] << " ";
		}
		cout << arr[0] << endl;
	}
	else {
		cout << 0 << endl<<0<<endl;
	}
	return 0;
}
