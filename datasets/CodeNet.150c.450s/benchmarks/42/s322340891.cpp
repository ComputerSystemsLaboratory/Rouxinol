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
queue<process> calculate_round_robbin(queue<process> input, int time);
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
	queue<process> output = calculate_round_robbin(works, time);

	print_process_queue(output, num);

	return 0;
}

queue<process> calculate_round_robbin(queue<process> input, int time){
	int totalTime = 0;
	queue<process> output;
	while(!input.empty()){
		if(input.front().time > time){
			totalTime += time;
			input.front().time -= time;
			input.push(input.front());
			input.pop();
		}else{
			totalTime += input.front().time;
			input.front().time = totalTime;
			output.push(input.front());
			input.pop();
		}
	}
	return output;
}

void print_process_queue(queue<process> output, int num){
	for(int i = 0; i < num; ++i){
		cout << output.front().name << " " << output.front().time << endl;
		output.pop();
	}
}