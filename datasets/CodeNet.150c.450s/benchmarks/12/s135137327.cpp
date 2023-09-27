#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
const int inf=1000000001;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

class Heap{
public:
	Heap(){}
	int node;
	int key;
	int parent;
	int left;
	int right;
};

int main(){
	int n,i;
	cin>>n;
	vector<Heap> tree(n+1);
	loop(i,1,n+1){
		Heap a;
		int k;
		cin>>k;
		a.key=k;
		a.node=i;
		a.parent=a.left=a.right=2*inf;
		tree[i]=a;
	}
	loop(i,1,n+1){
		if(i!=1){
			tree[i].parent=tree[i/2].key;
		}
		if(2*i<=n){
			tree[i].left=tree[2*i].key;
		}
		if(2*i+1<=n){
			tree[i].right=tree[2*i+1].key;
		}
	}
	loop(i,1,n+1){
		cout<<"node "<<i<<": key = "<<tree[i].key<<", ";
		if(tree[i].parent!=2*inf){
			cout<<"parent key = "<<tree[i].parent<<", ";
		}
		if(tree[i].left!=2*inf){
			cout<<"left key = "<<tree[i].left<<", ";
		}
		if(tree[i].right!=2*inf){
			cout<<"right key = "<<tree[i].right<<", ";
		}
		cout<<endl;
	}
}