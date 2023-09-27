#include<iostream>
#include<queue>
using namespace std;
struct elem{
	int time;
	string name;
};
int main(){
	queue<elem> que;
	int n,q,curtime=0;
	cin>>n>>q;
	struct elem x;
	for(int i=0;i<n;i++){
		cin>>x.name>>x.time;
		que.push(x);
	}	
	while(!que.empty()){
		x=que.front();
		if(x.time<=q){
			curtime += x.time;
			cout<<x.name<<" "<<curtime<<endl;
		}else{
			x.time -= q;
			curtime += q;
			que.push(x);
		}
		que.pop();
	}
	return 0; 
}