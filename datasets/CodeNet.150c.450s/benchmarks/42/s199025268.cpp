#include <iostream>
#include <string>
#include <cassert>
#include <list>

struct Proc{
	std::string name;
	int time;
};

typedef std::list<Proc> PList;

int input(PList& vec);
void output(const PList& vec);
PList calc(PList vec, int q);

///-------------------------------------------------
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
///-------------------------------------------------
void output(const PList& vec)
{
	for(PList::const_iterator itr = vec.begin(); itr != vec.end(); itr++){
		std::cout << itr->name << " " << itr->time << std::endl;
	}
}
///-------------------------------------------------
PList calc(PList queue, int q)
{
	PList vec;
	int  time = 0;
	while(!queue.empty()){
		if(queue.front().time > q){
			time += q;
			queue.front().time -= q;
			queue.push_back(queue.front());
		}else{
			time += queue.front().time;
			queue.front().time = time;
			vec.push_back(queue.front());
		}
		queue.pop_front();
	}
	return vec;
}
///-------------------------------------------------