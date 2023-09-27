#include <iostream>
#include <string>

using namespace std;

bool isok(string a, string b)
{
	return (a == "lu" && b == "ru") || (a == "ru" && b == "lu") || (a == "ld" && b == "rd") || (a == "rd" && b == "ld");
}

int main(void)
{
	int n;
	while (cin >> n, n){
		string str, prev = "";
		int ret = 0;
		for (int i = 0; i < n; i++){
			cin >> str;
			if (isok(str, prev)) ret++;
			prev = str;
		}
		cout << ret << endl;
	}

	return 0;
}