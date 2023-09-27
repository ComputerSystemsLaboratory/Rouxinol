#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

typedef long long ll;

const ll INF = 2000000000000;
const int dmax = 2000000001;

int main(){
	
	ll V,E,s,t,cost;
	cin >> V >> E;
	
	ll A[V][V];
	
	for (int i=0;i<V;i++){
		for (int j=0;j<V;j++){
			A[i][j]=INF;
		}
	}
	
	for (int i=0;i<E;i++){
		cin >>  s >> t >> cost;
		A[s][t]=cost;
	}
	
	ll d[V][V][V];
	
	for (int i=0;i<V;i++){
		for (int j=0;j<V;j++){
			if(i!=j){
				d[i][j][0]=min(A[i][j],A[i][0]+A[0][j]);
			}else{
				d[i][j][0]=0;
			}
		}
	}
	
	for (int k=1;k<V;k++){
		for (int i=0;i<V;i++){
			for (int j=0;j<V;j++){
				d[i][j][k]=min(d[i][j][k-1],d[i][k][k-1]+d[k][j][k-1]);
			}
		}
	}
	
	for (int i=0;i<V;i++){
		for (int j=0;j<V;j++){
			if(d[i][j][V-1]<0 && d[j][i][V-1]<0){
				cout <<"NEGATIVE CYCLE" <<endl;
				return 0;
			}
		}
	}
	
	for (int i=0;i<V;i++){
		for (int j=0;j<V;j++){
			if(d[i][j][V-1]>dmax){
				cout << "INF";
			}else{
				cout << d[i][j][V-1];
			}
			if(j!=V-1){
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}