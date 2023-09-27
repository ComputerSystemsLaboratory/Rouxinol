
#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char ch;
	while(1){
		cin.get(ch);
		if(ch == '\n')
			break;
		if(islower(ch))
			ch = toupper(ch);
		else if(isupper(ch))
			ch = tolower(ch);
		cout << ch;
	}
        cout << endl;
	return 0;
}