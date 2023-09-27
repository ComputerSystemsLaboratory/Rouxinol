#include <iostream>
#include<algorithm>
#include<string>
using namespace std;



int main(void){
	
	string str;
	getline(cin, str);


	for (int i = 0; i < (str.length()/2); i++){
	
		swap(str[i], str[str.length() - i-1]);
	}


	for (int i = 0; i<str.length(); i++){

		cout << str[i];
	}cout << endl;

	
	return 0;
}