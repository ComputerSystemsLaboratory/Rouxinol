#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str;
	int count;
	int h;

	while(true){
		cin >> str;

		if (str == "-")break;

		cin >> count;

		for (int i = 0; i < count; i++){
			cin >> h;
			
			str.append(str.begin(), str.begin() + h);
			str.erase(0, h);
		}

		cout << str << "\n";
	}	

	return 0;
}