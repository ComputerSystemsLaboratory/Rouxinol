#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <queue>

using namespace std; 

typedef pair<int,int> P;

int W,H;

bool pass[900][900];

//スタートからの距離
int d[50][50];

//上下左右
const int dw[4]={0,0,-1,1};
const int dh[4]={-1,1,0,0};

const int INF=10000;

int main(){

	int n;
	while(cin>>n,n){
		long long res=0;
		vector<long long> sum;
		sum.push_back(0);
		for(int i=1;i<=n;i++) sum.push_back(i+sum[i-1]);
/*
		for(int i=0;i<sum.size();i++){
			cout<<sum[i]<<" ";
		}
		cout<<endl;
*/
		for(int i=2;i<sum.size();i++){
			for(int j=i;j<sum.size();j++){
				if(sum[j]-sum[j-i]==n){res++; break;}
			}
		}

		cout<<res<<endl;

	}

	return 0;
}