#include <iostream>
#include <string>
#include <vector>
#define M 1046527

std::vector<std::string> H(M);
long long getKey(std::string s){
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		long long t = 0;
		switch(s[i]){
			case 'A':
				t = 1;
				break;
			case 'C':
				t = 2;
				break;
			case 'G':
				t = 3;
				break;
			case 'T':
				t = 4;
				break;
			default:
				t = 0;
				break;
		}
		sum += t;
		sum *= 5;
	}
	return sum;
}

int h1(int key){
	return key%M;
}

int h2(int key){
	return 1+(key%(M-1));
}

int find(std::string s){
	long long key, h;
	key = getKey(s);
	for(int i = 0; i < M; i++){
		h = (h1(key)+i*h2(key))%M;
		if(H[h] == s) return 1;
		else if(H[h].size() == 0) return 0;
	}
	return 0;
}

void insert(std::string s){
	long long  key, h;
	key = getKey(s);
	for(int i = 0; i < M; i++){
		h = (h1(key)+i*h2(key))%M;
		if(H[h] == s) return;
		else if(H[h].size() == 0){
			H[h] = s;
			return;
		}
	}
	return;
}

int main(){
	int n;
	std::cin >> n;
	std::vector<std::string> cmd(n);
	std::vector<std::string> s(n);
	for(int i = 0; i < n; i++){
		std::cin >> cmd[i] >> s[i];
	}
	for(int i = 0; i < n; i++){
		if(cmd[i][0] == 'i'){
			insert(s[i]);
		}else if(cmd[i][0] == 'f'){
			if(find(s[i])){
				std::cout << "yes" << std::endl;
			}else{
				std::cout << "no" << std::endl;
			}
		}
	}
}