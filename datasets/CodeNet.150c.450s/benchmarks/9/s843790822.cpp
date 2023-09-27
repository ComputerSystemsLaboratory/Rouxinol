// 2014/07/29 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	while(true){
		string s;
		cin >> s;

		if(s=="-")
			break;

		int m;
		cin >> m;

		for(int i=0; i<m; i++){
			int h;
			cin >> h;

			string s1 = s.substr(0, h);
			string s2 = s.substr(h);

			s = s2+s1;
		}

		cout << s << endl;
	}

	return 0;
}