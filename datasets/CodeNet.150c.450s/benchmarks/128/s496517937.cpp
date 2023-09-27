#include <iostream>
#include <vector>
#include <math.h>
#include <string>

int main(void);
std::string rev_string(std::string str);


int main(){
	std::string str = "";
	//char str[20];
	std::cin >> str;
	std::cout << rev_string(str) << std::endl;

	//while (1);
	return 0;
}

//*
std::string rev_string(std::string str){
	int i;
	int len = str.length();
	for (i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	return str;
}
//*/
