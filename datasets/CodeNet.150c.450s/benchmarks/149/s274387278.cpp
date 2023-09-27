#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
struct UnionFind{
    vector<int> data;
    UnionFind(int size) : data(size, -1) {}
    bool unionSet(int x,int y){
        x=root(x);y=root(y);
        if(x==y)return 0;
        if(data[y]<data[x])swap(x,y);
        data[x]+=data[y],data[y]=x;
        return 1;
    }
    bool findSet(int x,int y){
        return root(x)==root(y);
    }
    int root(int x){
        return data[x]<0 ? x : data[x]=root(data[x]);
    }
    int size(int x){
        return -data[root(x)];
    }
};
int main(){
	int n,q;
	cin>>n>>q;
	UnionFind in(n);
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0)in.unionSet(b,c);
		else cout<<in.findSet(b,c)<<endl;
	}
}