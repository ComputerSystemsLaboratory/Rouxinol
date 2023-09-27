#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int answer;

	while(1){
		cin >> str;
		if(str == "0") break;
		answer = 0;

		while(1){
			answer += (int)str[0] - 48;
			str.erase(str.begin());
			if(str.empty()) break;
		}
		cout << answer << endl;
	}
	return 0;
}