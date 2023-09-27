#include <iostream>
#include <string>

using namespace std;


int main(int, char**)
{
	string s;
	unsigned int n;

	std::cin >> s >> n;
    string pstr = "print";
    string prep = "replace";
    for (unsigned int i = 0; i < n; ++i) {
        string inst;
        unsigned int x, y;
        cin >> inst >> x >> y;
        if( inst == pstr) {
            cout << s.substr(x, y - x + 1) << endl;
        } else if (inst==prep) {
            string s2;
            cin >> s2;
            s.replace(x, y - x + 1, s2);
        } else {
            string s2 = s.substr(x, y - x +1);
            for (unsigned int i = 0; i + x <= y; ++i)
                s2[i] = s[y - i];
            s.replace(x, y - x +1, s2);
        }
    }
    
	return 0;
}
  

