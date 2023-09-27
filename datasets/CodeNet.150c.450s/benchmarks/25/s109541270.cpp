#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    
	int count[26] = {0};
	while(cin >> str)
		for(auto c : str)
			if(isalpha(c)) ++count[tolower(c) - 'a'];
    
	for(int i=0; i<26; ++i)
		cout << (char)('a'+i) << " : " << count[i] << '\n';

	return 0;
}

