#include <iostream>
#include <queue>
#include <string>
using namespace std;
#define rep(i,n)	for(int i=0;i<n;i++)

int main(){
	int n,q;	cin>>n>>q;
	queue<int> time;
	queue<string> name;
	int tt;
	string nt;
	rep(i,n){
		cin>>nt;
		cin>>tt;
		name.push(nt);	time.push(tt);
	}
	int t=0;
	while(time.size()!=0){
		tt=time.front();	time.pop();
		nt=name.front();	name.pop();
		tt-=q;
		if(tt<=0){
			t+=q+tt;
			cout<<nt<<" "<<t<<endl;
		}
		else{
			t+=q;
			time.push(tt);
			name.push(nt);
		}
	}
	return 0;
}