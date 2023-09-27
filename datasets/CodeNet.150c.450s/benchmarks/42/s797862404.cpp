#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct TProcess
{
	string Name;
	int    Time;
};

struct TFinished
{
	string Name;
	int    Time;
};

queue<TFinished> RoundRobin(queue<TProcess> X, int q)
{
	queue<TFinished> Y;
	int TotalTime = 0;
	while(!X.empty()){
		if(X.front().Time <= q){
			TotalTime += X.front().Time;
			TFinished Finished;
			Finished.Name = X.front().Name;
			Finished.Time = TotalTime;
			X.pop();
			Y.push(Finished);
		}else{
			TotalTime += q;
			X.front().Time -= q;
			X.push(X.front());
			X.pop();
		}
	}
	return Y;
}

int main()
{
	int n, q;
	cin >> n;
	cin >> q;
	queue<TProcess> Input;
	for(int i = 0; i < n; i++){
		TProcess Process;
		cin >> Process.Name >> Process.Time;
		Input.push(Process);
	}
	queue<TFinished> Output = RoundRobin(Input, q);
	while(!Output.empty()){
		cout << Output.front().Name << " " << Output.front().Time << endl;
		Output.pop();
	}
	return 0;
}