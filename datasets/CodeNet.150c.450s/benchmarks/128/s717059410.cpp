#include<iostream>

char str[21];

int main(){
	std::cin >> str;
	int i = 0;
	for(;str[i] != '\0'; i++);
	i--;
	for(;i>=0; i--)
		std::cout << str[i];
	std::cout << std::endl;
	return 0;
}