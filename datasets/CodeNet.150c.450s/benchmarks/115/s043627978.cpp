#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int lcs(string X,string Y){
	int m = X.size();
	int n = Y.size();
	int maxi = 0; 
	int C[1001][1001];
	X = ' ' + X;
	Y = ' ' + Y;
	for(int i = 1;i <= m;i++) C[i][0] = 0;
	for(int i = 1;i <= n;i++) C[0][i] = 0;
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			if(X[i] == Y[j]){
				C[i][j] = C[i-1][j-1] + 1;
			}else{
				C[i][j] = max(C[i-1][j],C[i][j-1]);
			}
			maxi = max(maxi,C[i][j]);
		}
	}
	return maxi;
}

int main(){
	int n;
	cin >> n;
	string x,y;
	for(int i = 0 ;i < n;i++){
		cin >> x >> y;
		cout << lcs(x,y) << endl;;
	}
	return 0;
}