#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

const int MAX_V=10;
int d[10][10];
int V;
const int INF=100000000;

void warshall_floyd(){
	for(int k = 0; k < V; k++){
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}

int main(){

	int n;
	while(cin>>n&&n!=0){
		for(int i = 0; i < 10; i++)
			fill(d[i],d[i]+10,INF);
		set<int> s;
		for(int i = 0; i < n; i++){
			int a,b,c;
			cin>>a>>b>>c;
			d[a][b]=c;
			d[b][a]=c;
			s.insert(a);
			s.insert(b);
		}
		V=s.size();
		for(int i = 0; i < V; i++){
			d[i][i]=0;
		}

		warshall_floyd();
		int idx;
		int minValue=INF;
		for(int i = 0; i < V; i++){
			int sum=0;
			for(int j = 0; j < V; j++){
				if(i!=j&&d[i][j]!=INF){
					sum+=d[i][j];
				}
			}
			if(minValue>sum){
				minValue=sum;
				idx=i;
			}
		}
		cout<<idx<<" "<<minValue<<endl;
	}


	return 0;
}