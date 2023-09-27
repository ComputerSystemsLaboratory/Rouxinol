#include <iostream>

using namespace std;

class String{
private:
	int length;
public:
	String();
	int str_len(char* str);
};

String::String(){
	length = 0;
}

int String::str_len(char* str){
	int i=0;
	while(str[i++]){
		length++;
	}
	return length;
}

int main(void){

	char str[20];
	int len;
	String string;

	cin >> str;
	len = string.str_len(str);

	for(int i=len-1;i>=0;--i){
		cout << str[i] ;
	}
	cout << endl;

	return 0;
}