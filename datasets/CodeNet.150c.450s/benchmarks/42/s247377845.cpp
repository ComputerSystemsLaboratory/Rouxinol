#include<iostream>
#include<queue>
using namespace std;
struct ST {
	char name[11];
	int time;
};
ST x;
ST y;
queue <ST> Q;
queue <ST> ans;
int main(){
	int n,p;
	int i,j,sum=0;
	cin>>n>>p;
	for(i=0;i<n;i++){
		cin>>x.name>>x.time;
		Q.push(x);
	}
	while(!Q.empty()){
		y=Q.front();
		Q.pop();
		if(y.time>p){
			sum+=p;
			y.time-=p;
			Q.push(y);
		}
		else{
			sum+=y.time;
			y.time=sum;
			ans.push(y);
		}
	}
	while(!ans.empty()){
		x=ans.front();
		ans.pop();
		cout<<x.name<<" "<<x.time<<endl;
	}
	return 0;
}
	