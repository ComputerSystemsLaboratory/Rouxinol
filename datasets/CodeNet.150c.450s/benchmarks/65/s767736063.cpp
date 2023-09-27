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
class P{
public:
	int n;
	string s;
	int index;
	bool operator<(P x){
		return n < x.n;
	}
};

int main(){
	int n;string str;
	P A[36],B[36];
	cin >> n;
	REP(i,n){
		cin >> str;
		A[i].s=str;
		A[i].n=str[1];
		A[i].index=i;
		B[i] = A[i];
	}
	REP(i,n){
		for(int j=n-1;j>i;j--){
			if(A[j] < A[j-1]) swap(A[j],A[j-1]);
		}
	}
	REP(i,n){
		int minj=i;
		for(int j=i+1;j<n;j++){
			if(B[j] < B[minj])minj=j;
		}
		swap(B[i],B[minj]);
	}
	bool a=true,b=true;
	REP(i,n-1){
		if(A[i].n==A[i+1].n && A[i].index > A[i+1].index) a=false;
		if(B[i].n==A[i+1].n && B[i].index > B[i+1].index) b=false;
	}
	cout << A[0].s;
	REP(i,n-1){
		cout << " " << A[i+1].s;
	}
	cout << endl << (a?"Stable":"Not Stable") << endl;
	cout << B[0].s;
	REP(i,n-1){
		cout << " " << B[i+1].s;
	}
	cout << endl << (b?"Stable":"Not stable") << endl;
	return 0;
}