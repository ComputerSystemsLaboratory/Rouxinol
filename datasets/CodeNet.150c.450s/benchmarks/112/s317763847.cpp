#include <iostream>
#include <map>
#include <vector>

int main(void){
	int n, m;
	std::map<char, char> table;

	while(1){
		std::vector<char> data;
		std::cin >> n;
		if(n == 0)	return 0;

		for(char i='0'; i <= 'z'; i++){
			table[i] = '\0';
		}

		for(int i=0; i < n; i++){
			char before, after;
			std::cin >> before >> after;
			table[before] = after;
		}

		std::cin >> m;
		for(int i=0; i < m; i++){
			char temp;
			std::cin >> temp;
			data.push_back(temp);
		}

		for(int i=0; i < m; i++){
			if(table[data[i]] != '\0'){
				data[i] = table[data[i]];
			}
		}

		for(int i=0; i < m; i++){
			std::cout << data[i];
		}
		std::cout << std::endl;
	}
}