#include<iostream>
#include<string>
#include<vector>
#include<cctype>
int main(void) {
	std::string InputS, InputP;
	std::cin >> InputS >> InputP;
	bool Answer = false;
	int count = 0;
	while (count < InputS.size()) {
		if (InputS[count] == InputP[0]) {
			bool flag = false;
			for (int i = 0; i < InputP.size(); ++i) {
			
				if (InputS[(count + i) % InputS.size()] != InputP[i]) {
					flag = false;
					break;
				}
				else { flag = true; }
			}
			if (flag == true) {
				Answer = true;
				break;
			}
		}
		++count;
	}
	std::cout << (Answer ? "Yes" : "No") << std::endl;
//system("pause");
	return 0;
}