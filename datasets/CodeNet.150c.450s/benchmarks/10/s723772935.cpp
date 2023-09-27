#include <iostream>
#include <vector>
#include <fstream>

#define INPUT_FROM_FILE (0)

const int Num_doom = 4;
const int Num_floor = 3;
const int Num_room = 10;

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif // INPUT_FROM_FILE
	std::vector<std::vector<std::vector<char> > > doom_info;
	int n = 0;
	int b = 0;
	int f = 0;
	int r = 0;
	int v = 0;

	doom_info.resize(Num_doom + 1);
	for(unsigned i = 0; i < doom_info.size(); i++){
		doom_info[i].resize(Num_floor + 1);
		for(unsigned j = 0; j < doom_info[i].size(); j++){
			doom_info[i][j].resize(Num_room + 1, 0);
		}
	}

#if INPUT_FROM_FILE
	ifs >> n;
#else
	std::cin >> n;
#endif // INPUT_FROM_FILE

	for(int i = 0; i < n; i++){
#if INPUT_FROM_FILE
		ifs >> b >> f >> r >> v;
#else
		std::cin >> b >> f >> r >> v;
#endif // INPUT_FROM_FILE
		doom_info[b][f][r] += v;
	}

	for(unsigned i = 1; i < doom_info.size(); i++){
		for(unsigned j = 1; j < doom_info[i].size(); j++){
			for(unsigned int k = 1; k < doom_info[i][j].size(); k++){
				std::cout << " ";
				std::cout << (int)doom_info[i][j][k];
			}
			std::cout << std::endl;
		}
		if(i < doom_info.size() - 1){
			for(unsigned int j = 0; j < 20; j++){
				std::cout << "#";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}