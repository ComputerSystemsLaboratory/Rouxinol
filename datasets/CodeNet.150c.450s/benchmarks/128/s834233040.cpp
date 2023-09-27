#include <iostream>
#include <string>

using namespace std;

string str_reverse(string s)
{
    string ret;
    int i = s.size() - 1;
    
    while (-1 < i) {
        ret += s[i--];
    }
    
    return ret;
}
 
int main() {
	string str;
	
	cin >> str;
	
	str = str_reverse(str);
	
	cout << str << endl;
	
	return 0;
}