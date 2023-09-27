//  Created by Vignesh Manoharan

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cstring>
#include <cassert>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<vi> vvi;

const int INF = 1000000000;
const ll LINF = 1e17;
const double PI =3.141592653589793238;
#pragma unused(INF,PI,LINF)
#define F(i,a,n) for(int i=(a);i<(n);i++)

template<typename T,typename TT> ostream& operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream& operator<<(ostream &s,vector<T> t){
    for(int i=0;i<(t).size();i++)s<<t[i]<<((i<(t).size()-1)?" ":"");return s; }
template<typename T> ostream& operator<<(ostream &s,set<T> t){for(T x:t) s<<x<<" ";return s; }
template<typename T> istream& operator>>(istream &s,vector<T> &t){
    for(int _i=0;_i<t.size();_i++) s>>t[_i];return s; }

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

const int MAXN=10010;
int parent[MAXN];
int root(int v){return parent[v] < 0 ? v : (parent[v] = root(parent[v]));}
void merge(int x,int y){	//	x and y are some vertices
    if((x = root(x)) == (y = root(y)))
       return ;
    if(parent[y] < parent[x])	// balancing the height of the tree
       swap(x, y);
    parent[x] += parent[y];
    parent[y] = x;
}

int main(int argc, const char * argv[]) {
#ifdef local_test
    //    input
    //    freopen("input","w",stdout);
    //    cout<<"1 \n 100 10 \n";
     freopen("input","r",stdin);
     freopen("output","w",stdout);
#endif
    int n,q;
    cin>>n>>q;
    F(i,0,n) parent[i]=-1;
    F(i,0,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0){
            merge(x,y);
        } else {
            cout<<(root(x)==root(y))<<"\n";
        }
    }
}