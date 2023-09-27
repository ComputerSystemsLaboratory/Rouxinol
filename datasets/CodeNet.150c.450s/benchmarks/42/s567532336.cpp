#include<iostream>
#include<queue>
#include<map>
using namespace std;

int main(){
	int n,q;
	int taskTime=0;
	
	cin>>n>>q;
	queue< pair<string, int> > set;
	
	for(int i=0;i<n;i++){
		string name;int time;
		cin>>name>>time;
		set.push(make_pair(name, time));
	}
	
	while(!set.empty()){
		int tmpT;
		tmpT=set.front().second-q;
		if(tmpT<=0){
			taskTime += q+tmpT;
			cout<<set.front().first<<" "<<taskTime<<endl;
			set.pop();
		}else{
			taskTime += q;
			set.front().second=tmpT;
			set.push(set.front());
			set.pop();
		}
	}
	
	return 0;
}