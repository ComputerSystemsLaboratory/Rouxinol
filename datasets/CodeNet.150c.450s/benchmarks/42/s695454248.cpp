#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Process
{
	string name;
	int time;
};

void Calculate(queue<Process> p, int q)
{
	int time = 0;

	while(1){
		
		Process temp;
		temp = p.front();
		
		if(temp.time>q){
			temp.time -= q;
			p.push(temp);
			time += q;
			p.pop();
		}else{
			time += temp.time;
			cout << temp.name << " " << time << endl; 
			p.pop();
		}
		if(p.size() == 0)break; 
	}
	return;
}

int main()
{
	int n, q;
	cin >> n >> q;
	queue<Process> p;
	for(int i=0; i<n; i++){
		Process temp;
		cin >> temp.name >> temp.time;
		p.push(temp);
	}
	Calculate(p,q);
}