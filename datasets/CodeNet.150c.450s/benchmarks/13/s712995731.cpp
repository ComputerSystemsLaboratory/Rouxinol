#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string s;
	std::string p;
	std::getline(std::cin,s);
	std::getline(std::cin,p);
	std::string ss = s + s;
	for(unsigned int i = 0 ; i < s.length() ; i ++){
		unsigned int j = 0 ;
		while(p[j] == ss[i+j]){
			j++;
			if(j == p.length()){
				std::cout << "Yes" << std::endl;;
				return 0;
			}
		}
	}
	std::cout << "No" << std::endl;
	return 0;
}