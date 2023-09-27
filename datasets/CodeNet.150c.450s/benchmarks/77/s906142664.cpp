#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int N, M, g[21][21], x, y, i, j, k, l, c;
	string d;
	while(1){
		cin >> N;
		if(!N)break;
		for(j=0;j<21;j++){
			for(k=0;k<21;k++){
				g[j][k]=0;
			}
		}
		for(i=0;i<N;i++){
			cin >> x >> y;
			g[x][y] = 1;
		}
		cin >> M;
		x = 10;
		y = 10;
		c = 0;
		for(i=0;i<M;i++){
			cin >> d >> l;
			for(k=0;k<l;k++){
				if(d[0]=='N') y ++;
				else if(d[0]=='S') y --;
				else if(d[0]=='E') x ++;
				else if(d[0]=='W') x --;
				//cout << x << "," << y << endl;
				if(g[x][y]){
					g[x][y] = 0;
					c++;
				}
			}
		}
		if(c==N) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}