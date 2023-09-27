#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,b,n) for(int i=b;i<n;i++)

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

int main(){
	int n;
	int A[1000000];
	int B[1000000];
	A[0]=B[0]=0;
	for(int i = 1; i<1000000;i++){
		A[i] = i;
		B[i] =i;
		for(int j=1;;j++){
			int t =j*(j+1)*(j+2)/6;
			if(t > i)
				break;
			A[i]=min(A[i],A[i-t]+1);
			if(t%2==1)
				B[i]=min(B[i],B[i-t]+1);
		}
	}
	while(cin>>n,n){
		if(n==0)
			break;
		cout <<A[n]<<" "<<B[n]<<endl;
	}
	return 0;
}