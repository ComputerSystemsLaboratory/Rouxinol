#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<string>
#include<cmath>
#include<set>
#include<queue>
#include<deque>
#include<bitset>
#include<iomanip>
#include<cctype>
#include<map>
#include<cstring>
#include<bitset>
#include<cassert>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep2(i,a,b) for (int (i)=a;(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()

using namespace std;
using ll = long long int;

const int inf = 1001001000;
const long long int Inf = 1001001001001001000;



void print(vector<vector<int>> a){
	for (int i = 0; i < a.size(); i++)
	{
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<vector<long long int>> a){
	for (int i=0;i<a.size();i++){
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<int> a){
    int n = a.size();
    for (int j=0;j<n;j++) {
        if (j != n-1) cout << a[j] << " ";
        else cout << a[j] << endl;
    }
}

void print(vector<long long int> a){
    int n = a.size();
    for (int j=0;j<n;j++) {
        if (j != n-1) cout << a[j] << " ";
        else cout << a[j] << endl;
    }
}

void print(set<int> a){
	for (auto x:a)
		cout << x << " ";
	cout << endl;
}

//ベルマンフォード法.負閉路があれば1を返し，なければ0を返す.最短距離はdistに格納される.
//edgesは{from,to,wight}の順に入った辺のvector.distはinfで初期化された要素数が頂点数のvector.sは始点.
//O(VE)
int BF(vector<vector<int>> &edges, vector<int> &dist, int s){
	int inf = dist[0];
	dist[s] = 0;
	int v = dist.size();
	int e = edges.size();
	for (int i = 0; i < v; i++){
		for (int j = 0; j < e; j++){
			int l = dist[edges[j][1]];
			int r = dist[edges[j][0]] == inf ? inf : dist[edges[j][0]] + edges[j][2];			
			if (l > r){
				dist[edges[j][1]] = r;
				if(i == v - 1){
					return 1;
				}
			}
		}
	}
	return 0;
}

int main(){
	int v, e, p;
	cin >> v >> e >> p;
	vector<vector<int>> edge(e);
	rep(i,e){
		int a, b, c;
		cin >> a >> b >> c;
		edge[i] = {a, b, c};
	}
	vector<int> dist(v, inf);
	int f = BF(edge, dist, p);
	if(f)
		puts("NEGATIVE CYCLE");
	else {
		rep(i, v) {
			if (dist[i] > inf - 2000000)
				puts("INF");
			else
				cout << dist[i] << endl;
		}
	}
	return 0;
}
