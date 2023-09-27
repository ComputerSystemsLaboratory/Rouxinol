#include <stdlib.h>
#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct process{
	string name;
	int time;
};

void print_process_queue(queue<process> output, int num);
int main(){
	int num;
	int time;

	cin >> num;
	cin >> time;

	queue<process> works;
	for(int i = 0; i < num; ++i){
		process work;
		cin >> work.name;
		cin >> work.time;
		works.push(work);
	}
	int totalTime = 0;
	queue<process> output;
	while(!works.empty()){
		if(works.front().time > time){
			totalTime += time;
			works.front().time -= time;
			works.push(works.front());
			works.pop();
		}else{
			totalTime += works.front().time;
			works.front().time = totalTime;
			output.push(works.front());
			works.pop();
		}
	}
	print_process_queue(output, num);

	return 0;
}


void print_process_queue(queue<process> output, int num){
	for(int i = 0; i < num; ++i){
		cout << output.front().name << " " << output.front().time << endl;
		output.pop();
	}
}