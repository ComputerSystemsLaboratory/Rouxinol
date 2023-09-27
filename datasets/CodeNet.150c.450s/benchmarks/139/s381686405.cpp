#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
 
using namespace std;
typedef long long int ll;
typedef pair <int,int> pii;
typedef pair<ll,ll> pll;
 
 
/*bool compare_function(const pair<int, int> a, const pair<int, int> b)
{
    return a.first < b.first;
}*/
// use case
//sort(V.begin(), V.end(), compare_function);
 
/*struct compare
{
    bool operator ()(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second-a.first==b.second-b.first)
    {
        return a.first>b.first;
    }
    return a.second-a.first < b.second-b.first;}
};
priority_queue <pair<int,int>, vector <pair<int,int>>, compare> Q;*/
 
void print(vector <int> X)
{
    for (int i=2; i<X.size(); i++)
    {
        cout<<X[i]<<endl;
    }
    return;
}
 


void solve(vector <set<int>> &G, int n) {
	vector <int> A(n+1,0);
	queue <int> Q;
	A[1]=1;
	Q.push(1);
	while (!Q.empty()) {
		int a=Q.front();
		Q.pop();
		for (int u:G[a]) {
			if (A[u]==0) {A[u]=a; Q.push(u);}
			}
		}
	A[1]=0;
	for (int i=2;i<=n;i++) {
		if (A[i]==0) {cout<<"No"<<endl; return;}
		}
	cout<<"Yes"<<endl;
	print(A);
	return;
	}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector <set<int>> G(n+1);
    for (int i=0;i<m;i++) {
		int a,b;
		cin>>a>>b;
		G[a].insert(b);
		G[b].insert(a);
		}
	solve(G,n);
    return 0;
}
