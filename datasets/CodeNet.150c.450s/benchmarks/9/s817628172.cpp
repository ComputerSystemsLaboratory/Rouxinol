#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
	string str;
	cin >> str;
	while(str != "-"){
			int m;
			cin >> m;
			for(int i = 0; i < m; i++){
					int h;
					cin >> h;
					string sf = str.substr(h);
					str = sf + str.substr(0, h);
			}
			cout << str << endl;
			cin >> str;
	}
	return 0;
}

