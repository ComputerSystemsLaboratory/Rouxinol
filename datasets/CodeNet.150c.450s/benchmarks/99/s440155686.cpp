#include <iostream>
#include <string>

char c[4] = {'m', 'c', 'x', 'i'};
int v[4] = {1000, 100, 10, 1};

int toint(std::string);

int main(void){

	int n;
	int sum=0;
	std::string s1, s2;
	std::cin >> n;

	while(n--){
		std::cin >> s1 >> s2;
		sum = toint(s1) + toint(s2);

		for(int i=0; i<4; i++){
			int d = (sum / v[i]);
			sum -= (d * v[i]);
			if(d>1){
				std::cout << d;
			}
			if(d>0){
				std::cout << c[i];
			}
		}
		std::cout << std::endl;

	}
	return 0;
}

int toint(std::string s){

	int d=1;
	int sum=0;

	for(int i=0; i<(int)s.size();i++){
		if('0' <= s[i] && s[i] <='9'){
			d = s[i] - '0';
		}else{
			for(int j=0; j<4; j++){
				if(s[i] == c[j]){
					sum += (v[j] * d);
					d = 1;
					break;
				}
			}
		}
	}
	return sum;
}