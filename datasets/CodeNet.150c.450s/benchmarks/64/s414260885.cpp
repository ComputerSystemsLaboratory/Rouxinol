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
int n;
int *S;
int q,m;

bool combination(int x,int i){
	if(x == 0) return true;
	if(i >= n) return false;
	bool ans = combination(x - S[i],i+1) || combination(x,i+1);
	return ans;
}

int main(){

	cin >> n;
	S = new int[n];

	for(int i = 0;i < n;i++){
		cin >> S[i];
	}
	cin >> q;
	for(int j=0;j<q;j++){
		cin >> m;
		if(combination(m,0)){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	return 0;
}