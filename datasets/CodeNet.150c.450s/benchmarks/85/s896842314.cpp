#include<iostream>
#include<vector>
using namespace std;

void compute(vector<vector<int> > & cost,vector<vector<int> > & best,
			 vector<int> & A,int s,int e){
	int minc = 0;
	int mink = -1;
	for(int k=s+1;k<=e;++k){
		if (cost[s][k-1] < 0){
			compute(cost,best,A,s,k-1);
		}
		if (cost[k][e] < 0) {
			compute(cost,best,A,k,e);
		}
		int c = cost[s][k-1] + A[s]*A[k]*A[e+1] + cost[k][e];
		if (mink < 0 || c < minc) {
			minc = c;
			mink = k;
		}
	}
	cost[s][e] = minc;
	best[s][e] = mink;
}

int main(){
	vector<vector<int> > cost,best;
	vector<int> A;
	int n;
	cin >> n;
	A.resize(n+1);
	for(int i=0;i<n;++i) {
		int r,c;
		cin >> r >> c;
		if (i==0){
			A[0] = r;
		}
		if (A[i] != r){ cout << "error";return (0);}
		A[i+1] = c;
	}
	cost.resize(n);
	best.resize(n);
	for(int i=0;i<n;++i){
		cost[i].resize(n);
		best[i].resize(n);
		for(unsigned j=0;j<cost[i].size();++j){
			cost[i][j] = -1;
			best[i][j] = -1;
		}
		cost[i][i]=0;
		best[i][i]=i;
	}
	compute(cost,best,A,0,n-1);
	cout << cost[0][n-1] << std::endl;
	return 0;
}