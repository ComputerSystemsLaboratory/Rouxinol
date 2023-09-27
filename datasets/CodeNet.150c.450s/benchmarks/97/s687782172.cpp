#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<int,int> P;
bool f(P p1,P p2){
	return p1.second > p2.second;
}
int main(){
	P p[200],tp;
	int a,b,dx[] = {-1,0,1,0},dy[] = {0,1,0,-1},x,y,n;
	while(cin >> n,n){
		tp.first = 0;
		tp.second = 0;
		p[0] = tp;
		for(int i = 0;i < n - 1;++i){
			cin >> a >> b;
			tp.first = p[a].first + dx[b];
			tp.second = p[a].second + dy[b];
			p[i + 1] = tp;
		}
		sort(p,p+n);
		x = abs(p[0].first - p[n - 1].first) + 1;
		sort(p,p+n,f);
		y = abs(p[0].second - p[n - 1].second) + 1;
		cout << x << " " << y << endl;
	}
	return 0;
}