#include<iostream>
#include<vector>

#define MAX_NODE 100
#define INF 1000000000

using namespace std;

struct Edge{
	int to, w;
};

vector <Edge> e[MAX_NODE];

int minw[MAX_NODE];
bool flag[MAX_NODE];

int prim(int n,int start){
	fill(minw,minw+n,INF);
	fill(flag,flag+n,false);
	minw[start]=0;
	int sum=0;
	int from = start;
	while(1){
		for(int i=0;i<e[from].size();i++){
			if(e[from][i].w<minw[e[from][i].to]){
				minw[e[from][i].to]=e[from][i].w;
			}		
		}
		int minimum_e;
		minimum_e=INF;
		for(int i=0;i<n;i++){
			if(minimum_e>minw[i]&&flag[i]==false){
				minimum_e=minw[i];
				from=i;
			}
		}
		if(minimum_e==INF){
			break;
		}
		sum+=minimum_e;
		flag[from]=true;
	}
	return sum;
}

int main(){
	int n,tmp,sum;
	Edge edge;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>tmp;
			if(tmp!=-1){
				edge.to=j;
				edge.w=tmp;
				e[i].push_back(edge);
			}
		}
	}
	sum=prim(n,0);
	cout<<sum<<endl;
	return 0;
}