#include <iostream>
#include <vector>
#include <fstream>

#define INPUT_FROM_FILE (0)

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif // INPUT_FROM_FILE
	std::vector<std::vector<bool> > is_exists_card;
	std::vector<char> c_vec(4);
	int n = 0;

	is_exists_card.resize(4);
	for(unsigned int i = 0; i < 4; i++){
		is_exists_card[i].resize(14, false);
	}
	c_vec[0] = 'S';
	c_vec[1] = 'H';
	c_vec[2] = 'C';
	c_vec[3] = 'D';

#if INPUT_FROM_FILE
	ifs >> n;
#else
	std::cin >> n;
#endif // INPUT_FROM_FILE


	for(int i = 0; i < n; i++){
		char c = 0;
		int num = 0;
		char idx_c = 0;

#if INPUT_FROM_FILE
		ifs >> c >> num;
#else
		std::cin >> c >> num;
#endif // INPUT_FROM_FILE

		switch(c){
		case 'S':
			idx_c = 0;
			break;
		case 'H':
			idx_c = 1;
			break;
		case 'C':
			idx_c = 2;
			break;
		case 'D':
			idx_c = 3;
			break;
		default:
			break;
		}
		is_exists_card[idx_c][num] = true;
	}
	for(int j = 0; j < 4; j++){
		for(int i = 1; i < 14; i++){
			if(!is_exists_card[j][i]){
				std::cout << c_vec[j] << " " << i << std::endl;
			}
		}
	}
	return 0;
}