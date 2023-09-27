#include <iostream>
using namespace std;

int main()
{
	int n, left, right, res;
	string buf;
	while (cin >> n, n) {
		left = right = res = 0;
		for (int i = 0; i < n; i++) {
			cin >> buf;
			if (buf == "lu") {
				left = 1;
			} else if(buf == "ld"){
				left = 0;
			} else if(buf == "ru"){
				right = 1;
			} else {
				right = 0;
			}
			if ((res % 2 == 0 && left == 1 && right == 1) || (res % 2 == 1 && left == 0 && right == 0))
				res++;
		}
		cout << res << endl;
	}
	return 0;
}