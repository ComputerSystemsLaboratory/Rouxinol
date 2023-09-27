#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cassert>
#include <list>

struct Proc{
	std::string name;
	int time;
};

typedef std::list<Proc> PList;

int input(PList& vec);
int output(PList& vec);
PList calc(PList vec, int q);


int main()
{
	PList ivec;
	int q = input(ivec);
	PList ovec = calc(ivec,q);

	output(ovec);

	return 0;
}
///--------------------------------------------
int input(PList& vec)
{
	int n;
	std::cin >> n;
	//vec.resize(n);
	int q;
	std::cin >> q;
    for(int i = 0; i < n; i++){
		Proc proc;
		std::cin >> proc.name;
		std::cin >> proc.time;
		vec.push_back(proc);
	}
	return q;
}
///--------------------------------------------
int output(PList& vec)
{
	for(PList::iterator itr = vec.begin(); itr != vec.end(); itr++){
  //	for(int i = 0; i < (vec.size()); i++){
		std::cout << itr->name << " " << itr->time << std::endl;
	}
	return 0;
}
///--------------------------------------------
///@func    calc
///@brif    ??¨????
///in       ??????
///in       ???????????????
///out      ??????
///--------------------------------------------
PList calc(PList queue, int q)
{

	PList vec;
	int i = 0;
	int time = 0;
	while(true){

		if(queue.front().time > q){
			time += q;
			queue.front().time = (queue.front().time - q);
			queue.push_back(queue.front());

		}else{
			time = time + (queue.front().time );
			vec.push_back(queue.front());
			vec.back().time = time;
		}
		queue.pop_front();
		//queue.erase(queue.begin());
		if(queue.empty()){
			break;
		}
//		i++;
	}

	return vec;

}