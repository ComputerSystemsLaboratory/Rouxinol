#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
const int N=1e4;
int n,m,ans;
vector <pair <int, pair <int, int> > > g;
vector <pair <int, int> > MST;
int parent [N];
 
int root (int a){
    if(parent[a] ==a)
        return a;
    parent[a]=root(parent[a]);
    return root(parent[a]);
}
 
void Union (int a,int b){
    parent[root(a)]=root(b);
}
 
void find_mst(){
	sort (g.begin (), g.end ());
	MST.clear();
	for(int i=0; i<n; i++)
	    parent[i]=i;
	for(int i=0; i<m; i++){
		int f=g[i].second.first;
		int t=g[i].second.second;
		if(root(f)!=root(t)){
		    MST.push_back(g[i].second);
		    ans+=g[i].first;
			Union(f,t);
		}
	}
}
 
int main() {
	cin >> n>>m;
	g.clear();
	for(int i=0; i<m; i++){
		int f,t,w;
		cin >>f>>t>>w;
		g.push_back(make_pair (w, make_pair (f,t)));
	}
    find_mst();	
    cout << ans << endl;
}