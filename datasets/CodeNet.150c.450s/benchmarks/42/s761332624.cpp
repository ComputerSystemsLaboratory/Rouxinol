#include <iostream>
#include <string>
#include <queue>
#include <utility>
#define MIN(a,b) ((a<b)?(a):(b))
using namespace std;
typedef pair<string,int> ps;
int main(void){
	queue<ps> q;
	string s;
	int a;
	int t=0;
	int n,qt;
	cin>>n>>qt;
	for(int i=0;i<n;i++){
		cin>>s>>a;
		q.push(ps(s,a));
	}
	
	while(n){
		ps temp=q.front();
		q.pop();
		if(temp.second-qt>0){
			temp.second-=qt;
			t+=qt;
			q.push(temp);
		}else{
			t+=temp.second;
			cout<<temp.first<<" "<<t<<endl;
			n--;
		}
	}
	return 0;
}