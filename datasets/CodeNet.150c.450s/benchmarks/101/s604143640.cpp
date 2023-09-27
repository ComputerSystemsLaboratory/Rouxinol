#include<iostream>
#include<vector>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 100000+5
int color[MAX];
vector<int> u[MAX];
int num;
void ranse(int p,int color_num){
	stack<int> s;
	int a;
	s.push(p);color[p]=color_num;
	while(!s.empty()){
		a=s.top();s.pop();
		for(int i=0;i<u[a].size();i++){
		if(color[u[a][i]]==-1){
			s.push(u[a][i]);color[u[a][i]]=color_num;
		}
	}
	}
}
int main(){
	int m;
	memset(color,-1,sizeof(color));
	cin>>num>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		u[a].push_back(b);u[b].push_back(a);
	}
	int color_num=0;
	for(int i=0;i<num;i++){
		if(color[i]==-1){
			ranse(i,color_num);color_num++;
		}
	}
	int order_num;
	cin>>order_num;
	for(int i=0;i<order_num;i++){
		int a,b;
		cin>>a>>b;
		if(color[a]==color[b]) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
} 
