#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

#define TEISU 1000000
#define INF 1145141919810LL
#define BLACK 2
#define GRAY 1
#define WHITE 0
#define MAX_N 500000

long long d[MAX_N];
long long color[MAX_N];
vector<long long> x[MAX_N];

priority_queue<long long,vector<long long>,greater<long long>>Q;
 
void dijkstra(){
    while(!Q.empty()){
        long long A=Q.top()/TEISU;
        long long B=Q.top()%TEISU;
        Q.pop();
        color[B]=BLACK;
 
        if(d[B]<A*(-1))continue;
 
        for(int v=0;v<x[B].size();v++){
            int w=x[B][v]/TEISU;
 
            if(color[w]==BLACK)continue;
 
            if(d[w]>d[B]+x[B][v]%TEISU){
 
                d[w]=d[B]+x[B][v]%TEISU;
                Q.push(d[w]*TEISU+w);
                color[w]=GRAY;
 
            }
        }
    }
}

int main(){
	long long n,m,r,a,b,c;
	cin>>n>>m>>r;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		x[a].push_back(b*TEISU+c);
	}
	Q.push(r);
	for(int i=0;i<MAX_N;i++){color[i]=WHITE;d[i]=INF;}
	d[r]=0;color[r]=GRAY;
	dijkstra();
	for(int i=0;i<n;i++){if(d[i]==INF){cout<<"INF"<<endl;}else{cout<<d[i]<<endl;}}
	return 0;
}