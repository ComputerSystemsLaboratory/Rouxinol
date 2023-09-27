#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

vi a;

void maxHeapify(int i){
	int l=2*i+1,r=2*i+2,largest;
	if(l<a.size() && a[l]>a[i]) largest=l;
	else largest=i;
	if(r<a.size() && a[r]>a[largest]) largest=r;
	if(largest!=i){
		swap(a[i],a[largest]);
		maxHeapify(largest);
	}
}
void buildMaxHeap(){
	for(int i=a.size()/2;i>=0;i--){
		maxHeapify(i);
	}
}

int main(){
	int n,t;
	cin>>n;
	rep(i,0,n){
		cin>>t;
		a.pb(t);
	}
	buildMaxHeap();
	rep(i,0,n){
		cout<<" "<<a[i];
	}
	cout<<endl;
}