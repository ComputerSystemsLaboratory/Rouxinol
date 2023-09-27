#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	int w, n, i, tmp, a, b;
	cin>>w;
	cin>>n;
	vector<int> vw(w);
	vector<vector<int> > vn(n, vector<int>(2));
	for(i=0;i<w;i++) vw[i] = i+1;
	for(i=0;i<n;i++){
		scanf("%2d,%2d",&a, &b);
		vn[i][0] = a-1;
		vn[i][1] = b-1;
		
		tmp = vw[(vn[i][0])];
		vw[(vn[i][0])] = vw[(vn[i][1])];
		vw[(vn[i][1])] = tmp;
	}
	for(i=0;i<w;i++) cout << vw[i] << endl;
	return 0;
}