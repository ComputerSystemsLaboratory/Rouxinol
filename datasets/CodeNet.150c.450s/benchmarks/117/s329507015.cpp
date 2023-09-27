#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <bitset>
#include <climits>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define RFOR(i,a,b) for (int i=(a)-1;i>=(b);i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 1e9 + 1;
const int MOD = 1e9 + 7;

using namespace std;
int ct = 0;
vector<int> a;
int R[5*(int)1e5],L[5*(int)1e5];
void merge(int left,int mid ,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	REP(i,n1)L[i] = a[left+i];
	REP(i,n2)R[i] = a[mid+i];
	L[n1] = R[n2] = INF;
	int i = 0,j = 0;
	for(int k = left;k < right;k++){
		if(L[i] < R[j])	a[k] = L[i++];
		else a[k] = R[j++];
	}
	ct += right - left;
}

void mergeSort(int left,int right){
	if(left + 1 < right){
		int mid = (left + right)/2;
		mergeSort(left,mid);
		mergeSort(mid,right);
		merge(left,mid,right);
	}
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;
	cin>>n;
	a.resize(n);for(auto& b:a)cin>>b;
	mergeSort(0,n);
	REP(i,n){
		if(i)cout << ' ';
		cout << a[i];
	}
	cout << endl << ct << endl;
  return 0;
}