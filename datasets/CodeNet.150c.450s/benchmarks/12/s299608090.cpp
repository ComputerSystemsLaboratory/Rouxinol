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
#define NIL -2100000000
int heap[700];
int n;

int parent(int i){
	return i/2;
}
int rightchild(int i){
	return 2*i+1;
}
int leftchild(int i){
	return 2*i;
}

int main(){
	cin>>n;
	for(int i =0;i <=699;i++){
		heap[i]=NIL;
	}
	for(int i =1;i <= n;i++){
		int x;
		cin>>x;
		heap[i]=x;
	}
	for(int i =1;i <=n;i++){
		printf("node %d: key = %d, ",i,heap[i]);
		if(heap[parent(i)]!=NIL) printf("parent key = %d, ",heap[parent(i)]);
		if(heap[leftchild(i)]!=NIL) printf("left key = %d, ",heap[leftchild(i)]);
		if(heap[rightchild(i)]!=NIL) printf("right key = %d, ",heap[rightchild(i)]);
		printf("\n");
	}
	return 0;
}