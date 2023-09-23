#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
	char str[1200];
	int j;
	cin.getline(str, 1200);
	size_t len = strlen(str);
	
	for(j = 0; j <= len-1; j++){
		if(islower(str[j]) != 0){
			str[j] = toupper(str[j]);
			// continue;
		}
		else if(isupper(str[j]) != 0){
			str[j] = tolower(str[j]);
			// continue;
		}
	}
	
	for(j = 0; j <= len-1; j++){
		cout << str[j];
	}
	cout << endl;
	
	return 0;
}