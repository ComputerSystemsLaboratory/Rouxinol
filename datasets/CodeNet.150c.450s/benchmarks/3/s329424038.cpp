#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
	string str;
	cin >> str;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
			string command;
			int x, y;
			cin >> command;
			if(command == "replace"){
					string z;
					cin >> x >> y >> z;
					for(int j = x; j <= y; j++){
							str[j] = z[j-x];
					}
			}else{
					cin >> x >> y;
					if(command == "reverse"){
							string orig = str.substr(x, y+1);
							for(int j = x; j <= y; j++){
									str[j] = orig[y-j];
							}
					}else if(command == "print"){
							for(int j = x; j <= y; j++){
									cout << str[j];
							}
							cout << endl;
					}
			}
	}
	return 0;
}

