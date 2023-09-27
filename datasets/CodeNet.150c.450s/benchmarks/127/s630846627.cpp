#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> set_string;

string reverse(string str){
	string res = "";
	for (int i = 0; i < str.size(); i++){
		res += str.substr(str.size() - 1 - i, 1);
	}
	return res;
}


void strage_lines(string up, string down, string depture_line, string reversal_line){
	if (up.size() == 0 && down.size() == 0 && reversal_line.size() == 0){
		set_string.insert(depture_line);
	}
	else{
		if (up.size() != 0){
			strage_lines("", down, depture_line + up, reversal_line);
			strage_lines("", down, depture_line, reversal_line + up);
		}
		if (down.size() != 0){
			strage_lines(up, "", depture_line + down, reversal_line);
			strage_lines(up, "", depture_line, reversal_line + down);
		}
		if (reversal_line.size() != 0){
			strage_lines(up, down, depture_line + reverse(reversal_line), "");
		}
	}
	
}


void arrival_line(string col){
	for (int i = 1; i < col.size(); i++){
		string up = "";
		string down = "";
		up = col.substr(0, i);
		down = col.substr(i, col.size() - i);
		strage_lines(up, down, "", "");
	}
}


int main(void){
	string str;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> str;
		set_string.clear();
		arrival_line(str);
		cout << set_string.size() << endl;
	}
	return 0;
}