#include <iostream>
#include <string>
#include <cassert>
#include <queue>

struct Proc{
	std::string name;
	int time;
};

typedef std::queue<Proc> PQue;

int input(PQue& vec);
void output(PQue& vec);
PQue calc(PQue vec, int q);

///-------------------------------------------------
int main()
{
	PQue ivec;
	int q = input(ivec);
	PQue ovec = calc(ivec,q);
	output(ovec);
	return 0;
}
///--------------------------------------------
int input(PQue& vec)
{
	int n;
	std::cin >> n;
	int q;
	std::cin >> q;
	for(int i = 0; i < n; i++){
		Proc proc;
		std::cin >> proc.name;
		std::cin >> proc.time;
		vec.push(proc);
	}
	return q;
}
///-------------------------------------------------
void output(PQue& vec)
{
	while(!vec.empty()){
		Proc proc = vec.front();
		vec.pop();
		std::cout << proc.name << " " << proc.time << std::endl;
	}
}
///-------------------------------------------------
PQue calc(PQue queue, int q)
{
	PQue vec;
	int  time = 0;
	while(!queue.empty()){
		if(queue.front().time > q){
			time += q;
			queue.front().time -= q;
			queue.push(queue.front());
		}else{
			time += queue.front().time;
			queue.front().time = time;
			vec.push(queue.front());
		}
		queue.pop();
	}
	return vec;
}
///-------------------------------------------------