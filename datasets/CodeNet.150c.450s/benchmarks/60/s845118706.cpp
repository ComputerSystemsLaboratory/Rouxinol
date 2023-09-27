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



int main(){
	int n;
	cin >> n;
	int graph[n+1][n+1];
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= n;j++){
			graph[i][j] = 0;
		}
	}
	for(int k = 0;k < n;k++){
		int i;
		cin >> i;
		int t;
		cin >> t;
		for(int l = 0;l < t;l++){
			int p;
			cin >> p;
			graph[i][p] = 1;
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(j != n){
				cout << graph[i][j] << " ";
			}else{
				cout << graph[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}