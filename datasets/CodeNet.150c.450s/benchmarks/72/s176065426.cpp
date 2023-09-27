#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

	// int islower(char ch);
	// int isupper(char ch);
	// int tolower(char ch);
	// int toupper(char ch):

int main(){

	int i = 0;
	string str;
	getline(cin, str);

	char c;
	while(str[i]){
		c = str[i];
		if(islower(c)){
			cout << (char)toupper(c);
		}else if(isupper(c)){
			cout << (char)tolower(c);
		}else{
			cout <<c;
		}
		i++;
	}

	cout << endl;


return 0;
}