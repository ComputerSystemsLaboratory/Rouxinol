#include <iostream>
#include <queue>
#include <vector>
#include <list>
#include <utility>
#define N 100
using namespace std;

typedef pair<int,int> pii;
int mat[N][N];
bool color[N];
int n;
int sum=0;
priority_queue<pii> pq;

int mini(int k){
	
	color[k]=true;
	for(int i=0;i<n;i++){
		if(mat[k][i]!=-1)pq.push(make_pair(-mat[k][i],i));
	}
	while(!pq.empty()){
		pii temp=pq.top();pq.pop();
		temp.first=-temp.first;
	//	cout<<"popping:"<<temp.first<<" "<<temp.second<<endl;
		if(color[temp.second])continue;
		color[temp.second]=true;
		sum+=temp.first;
	//	for(int i=0;i<n;i++) cout<<i<<":"<<((color[temp.second])?"t ":"f ");
//		cout<<endl;
		for(int i=0;i<n;i++){
			if(mat[temp.second][i]!=-1 && !color[i])pq.push(make_pair(-mat[temp.second][i],i));
		}
	}
	cout<<sum<<endl;
	return 0;
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++)color[i]=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	mini(0);
	return 0;
}