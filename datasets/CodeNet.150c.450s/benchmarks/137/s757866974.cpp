#include <iostream>
#include <string>

#define M 1046527

int dic[M] = {0};

int toInt(std::string str){
	int ret, i, pow;
	char ch;
	ret = 0;
	pow = 1;
	for(i=0; i<(int)str.size(); i++){
		ch = str[i];
		if(ch=='A') ret += pow;
		else if(ch=='C') ret += pow*2;
		else if (ch=='G') ret += pow*3;
		else ret += pow*4;
		pow *= 5;
	}
	//std::cout << ret << std::endl;
	return ret;
}

int hash1(int key){
	return key % M;
}

int hash2(int key){
	return (1 + key % (M-1));
}

void insert(std::string str){
	int i, key, h, h1, h2;
	i = 0;
	key =  toInt(str);
	h1 = hash1(key);
	h2 = hash2(key);
	while(1){
		h = (h1 + i*h2) % M;
		//std::cout << h << std::endl;
		if(dic[h] == 0){
			dic[h] = key+1;
			break;
		}
		else if(dic[h] == key+1){
			break;
		}
		else i++;
	}
}

bool find(std::string str){
	int i, h1, h2, key, h;
	bool flag;
	i = 0;
	key =  toInt(str);
	h1 = hash1(key);
	h2 = hash2(key);
	while(1){
		h = (h1 + i*h2) % M;
		if(dic[h] == 0){
			flag = false;
			break;
		}
		else if(dic[h] == key+1){
			flag = true;
			break;
		}
		else i++;
	}
	return flag;

}

int main(){
	int i,n;
	std::string op, str;
	std::cin >> n;
	for(i=0; i<n;i++){
		std::cin >> op >> str;
		if(op == "insert"){
			insert(str);
		}
		else{
			if (find(str)) std::cout << "yes" << std::endl;
			else std::cout << "no" << std::endl;
		}
	}
	return 0;
}