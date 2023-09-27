#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string str;
	int count = 0, h[100] = { 0 };

	while(cin >> str) {
		if(str == "-") break;
		cin >> count;
		for(int i = 0; i < count; i++) cin >> h[i];
		for(int i = 0; i < count; i++) {
			for(int j = 0; j < h[i]; j++) str+= str[j];
			for(int j = 0; j < h[i]; j++) str.erase(str.begin());
		}
		cout << str << endl;
		for(int i = 0; i < count; i++) h[i] = 0;
	}
	return 0;
}