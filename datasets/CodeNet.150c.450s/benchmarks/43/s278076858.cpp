#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	vector<string> v;

	while (cin >> n) {
		if (n == 0) {
			break;
		}

		int a = 0, b = 0, t_a = 0, t_b = 0;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (a > b) {
				t_a += a + b;
			}
			else if(a < b){
				t_b += a + b;
			}
			else {
				t_a += a;
				t_b += b;
			}
		}
		
		stringstream ss;
		ss << t_a << " " << t_b;
		v.push_back(ss.str());
	}

	for (int j = 0; j < v.size(); j++) {
		cout << v[j] << endl;
	}

	return 0;
}