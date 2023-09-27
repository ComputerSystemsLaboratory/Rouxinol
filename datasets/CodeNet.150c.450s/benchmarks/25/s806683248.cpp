#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<int> v(26,0);
	char c;
	while(cin >> c){
		if(isupper(c)) v[c-'A']++;
		else if(islower(c)) v[c-'a']++;
	}
	for(int i=0; i<26; i++){
		cout << (char)(i+'a') << " : " << v[i] << endl;
	}
	return 0;
}