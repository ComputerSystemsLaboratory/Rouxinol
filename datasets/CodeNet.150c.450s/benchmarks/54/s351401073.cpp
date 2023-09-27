#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string text;
	std::string word;
	std::cin >> word;
	//convert query word to lower case
	std::string temp;
	for(char c : word){
		if((int)c >= (int)'a'){
			temp.push_back(c);
		}else{
			temp.push_back((char)((int)c-(int)'A'+(int)'a'));
		}
	}
	word = temp;
	temp.clear();
	int count = 0;
	while(std::cin >> text){
		if(text.compare("END_OF_TEXT") == 0){
			break;
		}
		temp.clear();
		for(char c : text){
			if((int)c >= (int)'a'){
				temp.push_back(c);
			}else{
				temp.push_back((char)((int)c - (int)'A' + (int)'a'));
			}
		}
		text = temp;
	if(text.compare(word) == 0){
			count ++;
		}
	}
	std::cout << count << std::endl;
	return 0;
}