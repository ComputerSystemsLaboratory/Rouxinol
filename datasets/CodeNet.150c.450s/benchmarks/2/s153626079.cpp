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
int *S;
int n;


void partition(int p,int r){
	int i = -1;
	int j = -1;
	for(int k = 0;k < n-1;k++){
		if(S[k] <= S[r]){
			if(i == j){
				i++;
				j++;
			}else{
				swap(S[k],S[i+1]);
				i++;
				j++;
			}
		}else{
			j++;
		}
	}
	swap(S[r],S[i+1]);
	for(int l = 0;l < n;l++){
		if(l == i+1){
			cout << "[" << S[l] <<"] ";
		}else if(l == n-1){
			cout << S[l] << endl;
		}else{
			cout << S[l] << " ";
		}
	}
}

int main(){
	cin >> n;
	S = new int[n];
	for(int i = 0;i < n;i++) cin >> S[i];

	partition(0,n-1);
	return 0;
}