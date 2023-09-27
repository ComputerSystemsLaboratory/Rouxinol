#include <iostream>
#include <string>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string str;
	int q = 0;

#if INPUT_FROM_FILE
	ifs >> str >> q;
#else
	std::cin >> str >> q;
#endif

	for(int i = 0; i < q; i++){
		std::string op;
		int a = 0;
		int b = 0;
		int l = 0;

#if INPUT_FROM_FILE
		ifs >> op >> a >> b; 
#else
		std::cin >> op >> a >> b;
#endif
		l = b - a + 1;

		if(op == "print"){
			std::cout << str.substr(a, l) << std::endl;	
		}
		else if(op == "reverse"){
			std::string tmp = str.substr(a, l);
			for(int j = 0; j < l; j++){
				str.at(a + j) = tmp.at(l - j - 1);
			} 
		}
		else{
			std::string r;

#if INPUT_FROM_FILE
			ifs >> r; 
#else
			std::cin >> r;
#endif
			for(int j = 0; j < l; j++){
				str.at(a + j) = r.at(j); 
			}
		}
	}
	return 0;
}