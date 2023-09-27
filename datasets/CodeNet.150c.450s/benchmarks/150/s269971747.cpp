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
int *B,*A;
void countingsort(int N[],int max){
	int S[max+1];
	for(int i = 0;i < max+1;i++){
		S[i] = 0;
	}
	for(int j = 0;j < n;j++){
		S[N[j]]++;
	}
	int p = 0;
	for(int k = 0;k < max+1;k++){
		for(int l = 1;l <= S[k];l++){
			B[p] = k;
			p++;
		}
	}
}

int main(){
	cin >> n;
	int max = -1;
	A = new int[n];
	B = new int[n];
	for(int i = 0;i < n;i++){
		cin >> A[i];
		if(A[i] >= max){
			max = A[i];
		} 
	}
	countingsort(A,max);
	for(int i = 0;i < n;i++){
		if(i != n-1){
			cout << B[i] << " ";
		}else{
			cout << B[i] << endl;
		}
	}
	return 0;
}