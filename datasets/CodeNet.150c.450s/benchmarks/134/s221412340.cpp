#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1e9+7
#define MOD 1e9+7
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;

P p[100];
bool f[100];

void print_Preorder(int id){
	cout << " " << id;
	if (p[id].first != -1)print_Preorder(p[id].first);
	if (p[id].second != -1)print_Preorder(p[id].second);
}

void print_Inorder(int id){
	if (p[id].first != -1)print_Inorder(p[id].first);
	cout << " " << id;
	if (p[id].second != -1)print_Inorder(p[id].second);
}

void print_Postorder(int id){
	if (p[id].first != -1)print_Postorder(p[id].first);
	if (p[id].second != -1)print_Postorder(p[id].second);
	cout << " " << id;
}

int main(){
	int n, s;
	cin >> n;
	REP(i, n){
		int id, l, r;
		cin >> id >> l >> r;
		if (i == 0)s = id;
		p[id] = P(l, r);
		if (l != -1)f[l] = 1;
		if (r != -1)f[r] = 1;
	}
	REP(i, n){
		if (!f[i])s = i;
	}
	cout << "Preorder" << endl;
	print_Preorder(s);
	cout << endl;
	cout << "Inorder" << endl;
	print_Inorder(s);
	cout << endl;
	cout << "Postorder" << endl;
	print_Postorder(s);
	cout << endl;
}