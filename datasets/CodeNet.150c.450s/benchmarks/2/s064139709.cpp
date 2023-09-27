#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;
int C[10001];

int partition(int *A,int p,int r){
   int x = A[r];
   int i = p-1;
   for (int j = p ;j < r ;j++){
     if (A[j] <= x){
       i = i+1;
       swap(A[i],A[j]);
     }
   }
   swap(A[i+1],A[r]);
   return i+1;
}

int main(){
	int n,A[100000];
	cin >> n;
	REP(i,n){
		cin >> A[i];
	}
	int part;
	part = partition(A,0,n-1);
	cout << A[0];
	REP(i,n-1){
		cout << " ";
		if(part==i+1) cout << "[";
		cout << A[i+1];
		if(part==i+1) cout << "]";
	}
	cout << endl;
}