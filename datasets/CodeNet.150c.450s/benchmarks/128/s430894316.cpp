#include<iostream>
#include<sstream>
using namespace std;

int main(){

	string str;
	
	cin >> str;
	
	std::istringstream stream(str);
	for(int i=str.length()-1; i>=0; i--){
		stream >> str[i];
	}

	cout << str << endl;

	return 0;
}