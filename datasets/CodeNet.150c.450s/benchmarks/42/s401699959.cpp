#include<iostream>
#include <queue>
#include <string>
using namespace std;

struct process{
	string team;
	int time;
};

int main(){
	int n, q, sum = 0;
	queue<process> a;

	cin>>n>>q;
	for(int i=0;i<n;i++){
		struct process x;
		cin>>x.team>>x.time;	
		a.push(x);
	}

	while(!a.empty()){
		if(a.front().time <= q){
			sum += a.front().time;
			cout<<a.front().team<<" "<<sum<<endl;
			a.pop();
		} else {
			sum += q;
			a.front().time -= q;
			a.push(a.front());
			a.pop();
		}
	}

	return 0;
}