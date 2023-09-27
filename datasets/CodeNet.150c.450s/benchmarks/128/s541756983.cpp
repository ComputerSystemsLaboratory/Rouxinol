#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1, str2;
	char tmp;
	int i, length;

	getline(cin, str1);
	length = str1.size();
	//cout << length << endl;
	str2.reserve(length+1);
	for(i=0;i<length;i++){
		tmp = str1.at(length - i - 1);
		//cout << tmp << endl;
		str2 += tmp;
	}
	//str2 += '\0';
	cout << str2 << endl;
	//getline(cin, str1);

	return 0;
}