#include<iostream>
#include<queue>
#include<utility>
#include<string>


using namespace std;

typedef pair<string ,int> proc;

int main(){
	int n,q,sumTime=0;
	queue< proc > que;
	cin >> n>>q;
	
	
	for(int i=0;i<n;i++){
		proc p;
		cin >> p.first;
		cin >> p.second;
		que.push(p);
	}
	
	
	while(!que.empty()){
		proc p=que.front();
		que.pop();
		if(p.second <= q){
			sumTime += p.second;
			cout << p.first << " " << sumTime << endl;
		}else{
			sumTime += q;
			p.second -= q;
			que.push(p);
		}
	}
	return 0;
	
}