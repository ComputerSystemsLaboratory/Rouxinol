#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
	string str, order, repStr;
	cin >> str;

	int n = 0;
	cin >> n;
	int ord1 = 0, ord2 = 0;
	while (n--) {
		cin >> order;
		cin >> ord1 >> ord2;

		if (order == "replace") {
			cin >> repStr;
			str.replace(ord1, ord2 - ord1 + 1, repStr);
		}else if (order == "reverse"){
			
			repStr = str.substr(ord1, ord2 - ord1+1);
			reverse(repStr.begin(), repStr.end());
			str.replace(ord1, ord2 - ord1 + 1, repStr);
		}
		else if (order == "print") {
			cout << str.substr(ord1, ord2 - ord1+1) << endl;
		}
	}
    return 0;
}