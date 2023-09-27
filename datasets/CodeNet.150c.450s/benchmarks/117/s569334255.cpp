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
int cnt = 0;
void marge(int A[],int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1],R[n2+1];
	for(int i = 0;i < n1;i++){
		L[i] = A[left+i];
	}
	for(int j = 0;j < n2;j++){
		R[j] = A[mid+j];
	}
	L[n1] = 1000000001;
	R[n2] = 1000000001;
	int i = 0;int j = 0;
	for(int k = left;k < right;k++){
		cnt++;
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}else{
			A[k] = R[j];
			j++;
		}
	}
}

void margesort(int A[],int left,int right){
	if(left + 1 < right){
		int mid = (left + right)/2;
		margesort(A,left,mid);
		margesort(A,mid,right);
		marge(A,left,mid,right);
	}
}

int main(){
	int n;
	cin >> n;
	int S[n];
	for(int i = 0;i < n;i++){
		cin >> S[i];
	}
	margesort(S,0,n);
	for(int j = 0;j < n;j++){
		cout << S[j];
		if(j != n-1){
			cout << " ";
		}
	}
	cout << "" << endl;
	cout << cnt << endl;
	return 0;
}