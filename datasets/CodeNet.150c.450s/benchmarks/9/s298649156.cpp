#include<iostream>
#include<cctype>
#include<string>

std::string shuffle(std::string c, int t){
	std::string s = c;
	s = s.substr(t, s.size()-t) + s.substr(0, t);
	return s;
}

/*int main(){
	std::string t = "aabc";
	t = shuffle(t, 2);
	std::cout << t << std::endl;
	return 0;
}*/

int main(){
	std::string card;
	int num;
	
	while(1){
		std::cin >> card;
		if (card == "-") break;
		std::cin >> num;
		for(int i = 1; i <= num; i++){
			int a;
			std::cin >> a;
			card = shuffle(card , a);
		}
		
		std::cout << card << std::endl;
	}
	
	return 0;
}