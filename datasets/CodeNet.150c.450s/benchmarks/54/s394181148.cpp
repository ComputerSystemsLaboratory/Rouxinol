#include<iostream>
#include<cctype>
#include<string>

std::string toUpper(std::string s){
	for(int i=0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
	return s;
}

std::string clearSt(std::string s){
	int counter = 0;
	std::string cleared = s;
	for(int i = 0; i< s.size(); i++){
		if (isalpha(s[i])){
			cleared[counter] = s[i];
			counter +=1;
		}
	}
	cleared = cleared.substr(0, counter);
	return cleared;
}

int main(void){
	
	std::string W, st;
	int count = 0;
	
	std::cin >> W;
	W = toUpper(W);
	//std::cout  << W << std::endl;
	
	while(1){
		std::cin >> st;
		if(st == "END_OF_TEXT") break;
		st = toUpper(st);
		st = clearSt(st);
		//std::cout << st << std::endl;
		if(st == W) count += 1;
		//std::cout << "count is "  << count << std::endl;
	}
	
	std::cout << count << std::endl;
	
	return 0;
}