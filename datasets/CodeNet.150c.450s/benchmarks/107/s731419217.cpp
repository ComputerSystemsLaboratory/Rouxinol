#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const int MAX_N = 1005;

int c[MAX_N][MAX_N];

int main()
{
	string X,Y;
	cin >> X;
	cin >> Y;
	for(int i=0;i<=X.length();i++){
		c[i][0] = i;
	}
	for(int j=0;j<=Y.length();j++){
		c[0][j] = j;
	}
	for(int i=1;i<=X.length();i++){
		for(int j=1;j<=Y.length();j++){
			int p,q,r;
			if(X[i-1] == Y[j-1]){
				p = c[i-1][j-1];
			}else{
				p = c[i-1][j-1] + 1;
			}
			q = c[i][j-1] + 1;
			r = c[i-1][j] + 1;
			c[i][j] = min(min(p,q),r);
		}
	}
	cout << c[X.length()][Y.length()] << "\n";
}