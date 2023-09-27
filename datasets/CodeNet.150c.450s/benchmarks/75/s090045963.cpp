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
int heap[500010];
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
void maxHeapify(int i){
	int l =leftchild(i);
	int r =rightchild(i);
	int largest =i;
	if(l <= n&&heap[l] >heap[i]){
		largest = l;
	}
	if(r <=n&&heap[r] >heap[largest]){
		largest = r;
	}
	if(largest !=i){
		swap(heap[i],heap[largest]);
		maxHeapify(largest);
	}
}
void buildHeap(){
	for(int i =n/2;i >=1;i--){
		maxHeapify(i);
	}
}
int main(){
	cin>>n;
	for(int i =0;i <=500000;i++){
		heap[i]=NIL;
	}
	for(int i =1;i <= n;i++){
		int x;
		cin>>x;
		heap[i]=x;
	}
	buildHeap();
	for(int i =1;i <=n;i++){
		cout <<" "<<heap[i];
	}
	cout <<endl;
	return 0;
}