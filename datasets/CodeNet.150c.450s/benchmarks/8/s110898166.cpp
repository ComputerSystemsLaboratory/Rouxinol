#include <iostream>
#include <string>
using namespace std;

int main()
{
	int gamenum = 0;
	cin >> gamenum;
	int taroP = 0, hanakoP = 0;
	string taro, hanako;
	while (gamenum--) {
		cin >> taro >> hanako;
		if (taro < hanako) {
			hanakoP += 3;
		}
		else if (taro > hanako) {
			taroP += 3;
		}
		else {
			hanakoP += 1;
			taroP += 1;
		}
	}
	cout << taroP << " " << hanakoP << endl;
    return 0;
}