#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	string p;
	getline(cin, p);
	bool ansflag = false;
	for(int i = 0; i < s.length(); i++){
		bool flag = true;
		for(int j = 0; j < p.length(); j++){
			if(s[(i+j)%s.length()] != p[j]){
				flag = false;
				break;
			}
		}
		if(flag){
			ansflag = true;
			break;
		}
	}
	if(ansflag){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
}
