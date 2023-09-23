#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){

	string data;
	
	getline(cin, data);
	
	for (int i = 0;data[i];i++){

		if (islower(data[i])){
			cout << (char)toupper(data[i]);
		}
		else if (isupper(data[i])){
			cout << (char)tolower(data[i]);
		}
		else{
			cout << data[i];
		}
		
		
	}cout << endl;


	return 0;
}