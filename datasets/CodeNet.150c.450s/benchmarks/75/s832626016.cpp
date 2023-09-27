#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
 
 
const int INF = 1000000;
 

const int MAX_N = 4010;
const int MAX_M = 4010;


class my_binary_serch{
private:
	vi v;
public:
	void push(int n){v.pb(n);}
	void maxHeapify(int i){
		int l = i * 2 + 1;
		int r = i * 2 + 2;
		int largest;
		if(l < v.size() && v[l] > v[i]) largest = l;
		else largest = i;
		
		if(r < v.size() && v[r] > v[largest]) largest = r;

		if(largest != i){
			swap(v[i], v[largest]);
			maxHeapify(largest);
		}
	}
	void buildMaxHeap(){
		for(int i = v.size() / 2; i >= 0; i--){
			maxHeapify(i);
		}
	}
	void print(){
		for(int i = 0; i < v.size(); i++){
			cout<<" "<<v[i];
		}
		cout<<endl;
	}
};


int main(){
	my_binary_serch q;
	int n, t;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>t;
		q.push(t);
	}
	q.buildMaxHeap();
	q.print();
}