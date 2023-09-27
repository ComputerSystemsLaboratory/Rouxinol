// AOJ 2440

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	int n, m;
	string str;
	vector <string> keys;
	bool door = false;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str;
		keys.push_back(str);
	}

	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> str;
		bool know = false;
		for (int j = 0; j < n; j++){
			if (keys[j] == str){
				know = true;
			}
		}
		if (know){
			if (door){
				cout << "Closed by " << str << endl;
				door = false;
			}
			else {
				cout << "Opened by " << str << endl;
				door = true;
			}
		}
		else {
			cout << "Unknown " << str << endl;
		}
	}

	return 0;
}