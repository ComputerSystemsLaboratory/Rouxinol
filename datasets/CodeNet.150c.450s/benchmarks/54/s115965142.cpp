#include <iostream>
#include <string>
using namespace std;

int main(){

	string str1, str2;
	int count = 0;

	cin >> str1;
	for(int i=0; i<str1.size(); i++){
		if('A'<=str1[i] && str1[i]<='Z'){
			str1[i] = str1[i] - 'A' + 'a';
		}
	}

	while(cin >> str2){
		if(str2 == "END_OF_TEXT") break;
		for(int i=0; i<str2.size(); i++){
			if('A'<=str2[i] && str2[i]<='Z'){
				str2[i] = str2[i] - 'A' + 'a';
			}
		}
		if(str1 == str2) count++;
	}

	cout << count << endl;
}