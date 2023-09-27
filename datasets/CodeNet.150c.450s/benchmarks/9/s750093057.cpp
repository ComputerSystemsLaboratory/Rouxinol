#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int m, h;

	while (1){
		cin >> str;
		if (str[0] == '-')
			break;
		else{
			cin >> m;
			for (int i = 0; i < m; i++){
				cin >> h;
				string go_right = str.substr(0, h);
				string go_left = str.substr(h, str.length() - h);

				str = go_left + go_right;
			}
			cout << str << endl;
		}
	}

	return 0;
}