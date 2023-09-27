#include<iostream>
#include<string>
#include<vector>
#include<cctype>
int main(void) {
	std::vector<int> CountingCharactor('z' - 'a' + 1, 0);
	std::string Input;
	while (1) {
		std::getline(std::cin, Input);
		if (!(Input[0])) { break; }
		for (unsigned int i = 0; i < Input.size(); i++) {
			Input[i] = std::tolower(Input[i]);
			int element = Input[i] - 'a';
			if (0 <= element&&element <= 'z' - 'a') { ++CountingCharactor[element]; }
		}
			}
	for (int i = 0; i <= 'z' - 'a'; ++i) {
		char Charactor = 'a' + i;
		std::cout << Charactor << " : " << CountingCharactor[i] << std::endl;
	}
	//	system("pause");
	return 0;
}