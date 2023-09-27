#include <iostream>
#include <string>
using namespace std;
int main(void){
	string s;
	int x[26] = {};
	while(getline(cin,s) ){
		for(int i = 0;i < s.size();i++){
			char c = s.at(i);
			c = tolower(c);
			x[c - 'a']++;
		}
	}
	
	for(int i = 0;i < 26;i++){
		cout << char(i+'a') <<" : "<< x[i] << endl;
	}
	return 0;
}
