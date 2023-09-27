#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string s;
	int i=0;
	getline(cin,s);
	while (1){
		if (s[i] == NULL)break;
		if (isupper(s[i])){
			s[i] = tolower(s[i]);
			cout << s[i];
		}
		else if (islower(s[i])){
			s[i] = toupper(s[i]);
			cout << s[i];
		}
		else{
			cout << s[i];
		}
		i++;
	}
	cout << endl;
	return 0;
}