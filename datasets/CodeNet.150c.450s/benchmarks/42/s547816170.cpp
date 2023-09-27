#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct node{
	string name;
	int time;
};

int main(int argc, char *argv[]) {
	int n,q;
	int runtime = 0;
	cin>>n>>q;
	queue<node> in_queue;
	queue<node> out_queue;

	for(int i = 0; i<n; i++)
	{
		node input;
		cin>>input.name>>input.time;
		in_queue.push(input);
	}
	
	while(!in_queue.empty())
	{
			if(in_queue.front().time<=q)
			{
				runtime += in_queue.front().time;
				in_queue.front().time = runtime;
				out_queue.push(in_queue.front());
				in_queue.pop();	
				
			}
			else
			{
				runtime += q;
				in_queue.front().time -= q;
				in_queue.push(in_queue.front());
				in_queue.pop();
			}			
	}
	
	while(!out_queue.empty())
	{
		cout<<out_queue.front().name<<" "<<out_queue.front().time <<endl;
		out_queue.pop();
	}

	
	return 0;
}