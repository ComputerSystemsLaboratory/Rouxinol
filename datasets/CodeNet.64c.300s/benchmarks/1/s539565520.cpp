#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n;
int Partition(int *A,int p,int r){
	int x =A[r];
	int i =p-1;
	for(int j =p;j <=r-1;j++){
		if(A[j]<=x){
			i++;
			swap(A[i],A[j]);
			/*for(int k =0; k <n;k++){
				if(k==i){
					cout <<" ["<<A[k]<<"]";
				}else if(i==0){
					cout <<A[k];
				}else{
					cout <<" "<<A[k];
				}
			}
			cout <<endl;*/
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}
int main(){
	int d[100100];
	cin>>n;
	for(int i =0;i < n;i++){
		cin>>d[i];
	}
	int t =Partition(d, 0, n-1);
	for(int i =0; i <n;i++){
		if(i==t){
			cout <<" ["<<d[i]<<"]";
		}else if(i==0){
			cout <<d[i];
		}else{
			cout <<" "<<d[i];
		}
	}
	cout <<endl;
	return 0;
}