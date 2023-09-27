#include <iostream>
#include <vector>
#include <string>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

enum Face{
	TOP,
	SOUTH,
	EAST,
	WEST,
	NORTH,
	BOTTOM,
};

class Dice{
private:
	std::vector<int> faces_;	

public:
	Dice(const std::vector<int> &labels);

	~Dice();

	void roll_north();

	void roll_east();

	void roll_west();

	void roll_south();

	void roll_left();

	void roll_right();

	void roll_to(char d);

	int get_cur_label(char f);
};

Dice::Dice(const std::vector<int> &labels) : faces_(labels){
	return;
}

Dice::~Dice(){
	return;
}

void Dice::roll_north(){
	int tmp = faces_[TOP];
	faces_[TOP] = faces_[SOUTH];
	faces_[SOUTH] = faces_[BOTTOM];
	faces_[BOTTOM] = faces_[NORTH];
	faces_[NORTH] = tmp;
	return;
}

void Dice::roll_east(){
	int tmp = faces_[TOP];
	faces_[TOP] = faces_[WEST];
	faces_[WEST] = faces_[BOTTOM];
	faces_[BOTTOM] = faces_[EAST];
	faces_[EAST] = tmp;
	return;
}

void Dice::roll_west(){
	int tmp = faces_[TOP];
	faces_[TOP] = faces_[EAST];
	faces_[EAST] = faces_[BOTTOM];
	faces_[BOTTOM] = faces_[WEST];
	faces_[WEST] = tmp;
	return;
}

void Dice::roll_south(){
	int tmp = faces_[TOP];
	faces_[TOP] = faces_[NORTH];
	faces_[NORTH] = faces_[BOTTOM];
	faces_[BOTTOM] = faces_[SOUTH];
	faces_[SOUTH] = tmp;
	return;
}

void Dice::roll_left(){
	int tmp = faces_[SOUTH];
	faces_[SOUTH] = faces_[WEST];
	faces_[WEST] = faces_[NORTH];
	faces_[NORTH] = faces_[EAST];
	faces_[EAST] = tmp;
	return;
}

void Dice::roll_right(){
	int tmp = faces_[SOUTH];
	faces_[SOUTH] = faces_[EAST];
	faces_[EAST] = faces_[NORTH];
	faces_[NORTH] = faces_[WEST];
	faces_[WEST] = tmp;
	return;
}
void Dice::roll_to(char d){
	switch(d){
	case 'N':
		roll_north();
		break;
	case 'E':
		roll_east();
		break;
	case 'W':
		roll_west();
		break;
	case 'S':
		roll_south();
		break;
	case 'R':
		roll_right();
		break;
	case 'L':
		roll_left();
		break;
	default:
		break;
	}
	return;
}

int Dice::get_cur_label(char f){
	return faces_[f];
}

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int num_faces = 6;
	std::vector<int> labels(num_faces, 0);
	std::string operations;
	int q = 0;

	for(int i = 0; i < num_faces; i++){
#if INPUT_FROM_FILE
		ifs >> labels[i];
#else
		std::cin >> labels[i];
#endif;
	}



#if INPUT_FROM_FILE
	ifs >> q;
#else
	std::cin >> q;
#endif;

	for(int i = 0; i < q; i++){
		int top = 0;
		int south = 0;
		Dice dice(labels);

#if INPUT_FROM_FILE
		ifs >> top >> south;
#else
		std::cin >> top >> south;
#endif;
		////debug
		//std::cout << "start" << std::endl;
		//for(int j = 0; j < 6; j++){
		//	std::cout << dice.get_cur_label(j) << std::endl;
		//}
		//std::cout << std::endl;

		//TOP???????????????
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 4; k++){
				if(dice.get_cur_label(TOP) == top){
					j = 2;
					break;
				}	
				dice.roll_north();
				
				////debug
				//std::cout << "j, k:" << j << k <<  std::endl;
				//for(int j = 0; j < 6; j++){
				//	std::cout << dice.get_cur_label(j) << std::endl;
				//}
				//std::cout << std::endl;
			}
			if(j < 2){
				dice.roll_east();
			}
		}

		////debug
		//std::cout << "after top" << std::endl;
		//for(int j = 0; j < 6; j++){
		//	std::cout << dice.get_cur_label(j) << std::endl;
		//}
		//std::cout << std::endl;

		//SOUTH???????????????
		for(int j = 0; j < 4; j++){
			if(dice.get_cur_label(SOUTH) == south){
				std::cout << dice.get_cur_label(EAST) << std::endl;
				break;
			}
			dice.roll_right();
		}
	}

	return 0;
}