#include <iostream>
using namespace std;

int main()
{
	while(1){
		string s;
		getline(cin,s);
		int l = s.length();
		if(l == 1 && s[0] == '0') break;
		int sum = 0;
		for(int i=0; i<l; i++){
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}