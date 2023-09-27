#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

char char_shift(char c){
	if (islower(c)){
		return toupper(c);
	}
	return tolower(c);
}

int main(int argc,char *argv[]){
	char buf[1200];
	cin.getline(buf, sizeof(buf));
	string str = buf; 
	transform(str.begin(), str.end(), str.begin(), char_shift);
	cout << str << endl;
}