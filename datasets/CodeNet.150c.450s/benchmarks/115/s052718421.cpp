#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int q;
string X,Y;
int L[1001][1001];

int max(int i,int j) {return i > j ? i : j;}

int getL(int i,int j) {
	if(L[i][j] != -1) return L[i][j];

	int res;

	if(i == 0 || j == 0) res = 0;
	else if(X[i - 1] == Y[j - 1]) res = 1 + getL(i - 1,j - 1);
	else res = max(getL(i,j - 1),getL(i - 1,j));

	L[i][j] = res;
	return res;
}

int main() {

	cin >> q;
	for(int i = 0;i < q;i++) {
		cin >> X >> Y;
		for(int j = 0;j <= X.size();j++) {
			for(int k = 0;k <= Y.size();k++) L[j][k] = -1;
		}
		cout << getL(X.size(),Y.size()) << endl;
	}
}