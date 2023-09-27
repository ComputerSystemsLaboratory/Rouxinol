//be name khoda
//Pedram Sadeghian
// :)
#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5;
int n, m, k1, k2, dad[maxN], high[maxN], ans;
pair <int, pair <int, int> > P[maxN]; 
int root(int a){
	if (dad[a] == a)
		return a;
	dad[a] = root(dad[a]);
	return dad[a];
}
void merrge(int a, int b){
	if (high[root(a)] > high[root(b)])
		swap(a, b);
	int newhigh = high[root(b)];
	if (high[root(a)] == high[root(b)])
		newhigh++;
	dad[root(a)] = root(b);
	high[root(a)] = newhigh;
	return ;
}
int main(){
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < m ; i++){
		cin >> k1 >> k2 >> P[i].first;
		P[i].second.first = k1;
		P[i].second.second = k2;
	}
	sort(P, P + m);
	for (int i = 0 ; i < n ; i++){
		dad[i] = i;
		high[i] = 1;
	}
	for (int i = 0 ; i < m ; i++){
		 if (root(P[i].second.first) != root(P[i].second.second)){
		 	ans += P[i].first;
		 	merrge(P[i].second.first, P[i].second.second);
		 }
	}
	cout << ans << endl;
}