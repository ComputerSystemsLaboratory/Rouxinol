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

	void roll_to(char d);

	int get_cur_top_label();
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

void Dice::roll_to(char d){
	switch(d){
	case 78:
		roll_north();
		break;
	case 69:
		roll_east();
		break;
	case 87:
		roll_west();
		break;
	case 83:
		roll_south();
		break;
	default:
		break;
	}
	return;
}

int Dice::get_cur_top_label(){
	return faces_[TOP];
}

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int num_faces = 6;
	std::vector<int> labels(num_faces, 0);
	Dice *dice = NULL;
	std::string operations;

	for(int i = 0; i < num_faces; i++){
#if INPUT_FROM_FILE
		ifs >> labels[i];
#else
		std::cin >> labels[i];
#endif;
	}

	dice = new Dice(labels);

#if INPUT_FROM_FILE
	ifs >> operations;
#else
	std::cin >> operations;
#endif;

	for(unsigned int i = 0; i < operations.size(); i++){
		dice->roll_to(operations.at(i));
	}

	std::cout << dice->get_cur_top_label() << std::endl;	
	delete dice; dice = NULL;
	return 0;
}