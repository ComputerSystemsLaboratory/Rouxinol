#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int m, h;
	while(cin >> s) {
	    if(s.compare("-") == 0) break;
	    cin >> m;
	    for (int i = 0; i < m; ++i)
	    {
	    	cin >> h;
	    	string left = s.substr(0,h);
	    	string right = s.substr(h, s.length()-h);
	    	s = right + left;
	    }
	    cout << s << endl;
	}
	return 0;
}