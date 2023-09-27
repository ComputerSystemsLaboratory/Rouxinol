#include <iostream>
#include <vector>
#include <map>
#define rep(i) for(int i=0;i<=1;i++)
using namespace std;

vector<int> used(10);
map<vector<int>,int> u;

int n,s,c;
void walk(int now,int dep){
	if(dep==n){
		if(s==now)u[used]=1;
		return;
	}
	for(int i=0;i<=9;i++){
		if(!used[i]){
			used[i]=1;
			walk(now+i,dep+1);
			used[i]=0;
		}
	}
	return;
}
int main(void){
	while(cin>>n>>s,n||s){
		c=0;
		u.clear();
		for(int i=0;i<10;i++)used[i]=0;
		walk(0,0);
		cout<<u.size()<<endl;
	}
	return 0;
}