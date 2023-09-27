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
const int INF = 1e9+3;
const int MOD = 1e9 + 7;

using namespace std;

int partition(vector<pair<int,char> >& A,int p,int r){
	int x = A[r-1].first;
	int i = p-1;
	FOR(j,p,r){
		if(A[j].first <= x) swap(A[j],A[++i]);//pair swap
	}
	return i;
}

//[p,r)
void quickSort(vector<pair<int,char> >& A,int p,int r){
	if(p+1 < r){
		int standard = partition(A,p,r);
		quickSort(A,p,standard);
		quickSort(A,standard + 1,r);
	}
}

pair<int,char> L[(int)1e5],R[(int)1e5];
void merge(vector<pair<int,char> >& A,int left,int right,int mid){
	int n1 = mid - left;
	int n2 = right - mid;
	REP(i,n1)L[i] = A[left + i];
	REP(i,n2)R[i] = A[mid + i];
	L[n1].first = R[n2].first = INF;
	int i =0,j=0;
	FOR(k,left,right){
		if(L[i].first <= R[j].first)A[k] = L[i++];//<=??????????????¨????????§???????????????
		else A[k] = R[j++];
	}
}
//[left,right)
void mergeSort(vector<pair<int,char> >& A,int left,int right){
	if(left+1 < right){
		int mid = (left + right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,right,mid);
	}
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;cin>>n;
	vector<pair<int,char> > A(n);REP(i,n)cin>>A[i].second>>A[i].first;
	vector<pair<int,char> > B(A);
	quickSort(A,0,n);
	mergeSort(B,0,n);
	bool stable = true;
	REP(i,n){
		if(A[i].second != B[i].second){stable = false;break;}
	}
	if(stable)cout << "Stable" << endl;
	else	cout << "Not stable" << endl;
	REP(i,n){
		cout << A[i].second << ' ' << A[i].first << '\n';
	}
	/*	REP(i,n){
		cout << B[i].second << ' ' << B[i].first << '\n';
		}*/
  return 0;
}