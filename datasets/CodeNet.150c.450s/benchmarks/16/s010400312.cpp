// ALDS1_3_D Areas on the cross-section diagram

#include <iostream>
#include <stack>
#include <list>
#include <string>

struct puddle{
	int area;
	int begin;
};

int main(int argc, char *argv[]){
	std::stack<int> down;	// Position of down slope
	std::list<puddle> p;	// Data of puddle (area and begin position)
	char shape;	// '\' or '/' or '_'
	int position = 0;
	int total_area = 0;

	while(std::cin >> shape){
		puddle new_p;
		new_p.area = 0;
		if(shape == '\\'){
			down.push(position);
		}
		else if((shape == '/') && !down.empty()){
			int new_begin = down.top();
			new_p.area = position - new_begin;
			total_area += new_p.area;
			new_p.begin = new_begin;
			while((p.back()).begin > new_begin){
				new_p.area = new_p.area + (p.back()).area;
				p.pop_back();	// Delete top data
			}
			p.push_back(new_p);	// Add new puddle
			down.pop();	// Delete top data
		}
		position++;
	}

	std::cout << total_area << std::endl;
	std::cout << p.size();
	for(auto itr=p.begin() ; itr!=p.end() ; itr++){
		std::cout << " " << itr->area;
	}
	std::cout << std::endl;

	return 0;
}

