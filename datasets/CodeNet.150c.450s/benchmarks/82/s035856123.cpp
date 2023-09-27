#include <iostream>
#include <map>
using namespace std;

int main(){
	map<int, int> m;
	map<int, int> r;
	int a[6], n, x, y;
	int d[6][6]={{0,3,5,2,4,0},{4,0,1,6,0,3},{2,6,0,0,1,5},
		{5,1,0,0,6,2},{3,0,6,1,0,4},{0,4,2,5,3,0}};
	for(int i = 0;i < 6;i++){cin >> a[i];m[a[i]] = i;r[i] = a[i];}
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x >> y;
		int f = m[x];
		int t = m[y];
		//cout << "     *" << f << t << "*" << d[f][t] << endl;
		int tmp = d[f][t];
		cout << r[tmp-1] << endl;
	}
	
	return 0;
}