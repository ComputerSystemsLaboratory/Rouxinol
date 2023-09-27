#include<iostream>
bool student[31] = { false };
int main(){
	int n;
	for (int i = 0; i < 28; ++i){
		std::cin >> n;
		student[n] = true;
	}
	for (int i = 1; i < 31; ++i){
		if (!student[i])std::cout << i << std::endl;
	}
	return 0;
}