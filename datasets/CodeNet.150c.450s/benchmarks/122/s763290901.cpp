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
const int MAX_N =2000010;
int heap[MAX_N];
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
int sz = 1;
void push(int x){
	int i =sz++;
	while(i >1){
		int p =parent(i);
		//もし逆転していないなら抜ける
		if(heap[p] >=x)break;
		//親のノードの数字をおろして自分は上に
		heap[i]=heap[p];
		i = p;
	}
	heap[i] = x;
}
int pop(){
	//最大値取り出し
	int  ret =heap[1];
	//根に持ってくる値
	int x =heap[--sz];
	//根から下ろしていく
	int i = 1;
	while(leftchild(i) <sz){
		//子同士を比較
		int left =leftchild(i);
		int right =rightchild(i);
		if(leftchild(i) <sz&&heap[rightchild(i)] >heap[leftchild(i)]){
			left =right;
		}
		if(heap[left]<=x)break;

		heap[i]=heap[left];
		i =left;
	}
	heap[i]=x;
	return ret;
}
int main(){
	string str;
	while(cin>>str){
		if(str=="end")return 0;
		if(str=="insert"){
			int x;
			cin>>x;
			push(x);
		}else{
			cout <<pop()<<endl;
		}
	}
	return 0;
}