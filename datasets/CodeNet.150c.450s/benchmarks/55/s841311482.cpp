#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int x = 0;
	string s;
	char c;
	while(1){
		cin >> s;
		if(atoi(&s[0]) == 0){
			break;
		}
		x = 0;
		for(int i = 0; i < s.size(); i++){
//			cout << s[i] << endl;
			c = s[i];
			x += atoi(&c);
		}
		cout << x << endl;
	}

	return 0;
}