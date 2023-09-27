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
int k=10000;
int n;

void countingsort(int* A,int *B){
	int C[k+1];
	for(int i = 0;i <=k;i++){
		C[i]=0;
	}
	for(int i = 0;i <n;i++){
		C[A[i]]++;
	}
	C[0]--;
	//C[i]??????i??\????????°???????????°????¨???????????????????
	for(int i =1;i <=k;i++){
		C[i]=C[i]+C[i-1];
	}
	for(int j = n-1;j >=0;j--){
		B[C[A[j]]] =A[j];
		C[A[j]]--;
	}
}


int main(){
	cin>>n;
	int *A;
	int *B;
	A =new int[n];
	B =new int[n];
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	rep(i,n)cin>>A[i];
	countingsort(A,B);
	for(int i = 0;i <n;i++){
		if(i)cout<<" ";
		cout<<B[i];
	}
	cout<<endl;
	delete[] A;
	delete[] B;
	return 0;
}