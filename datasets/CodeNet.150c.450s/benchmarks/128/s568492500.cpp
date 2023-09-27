#include<iostream>
#include<string>

int main(){
	std::string st;
	std::cin >> st;
	
	while(!(st.empty())){
		std::cout << st.back();
		st.erase(st.begin() + st.size() -1);
	}
	std::cout << std::endl;
	return 0;
}