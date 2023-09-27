#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

void print(int A[], int N){
	rep(i, N){
		if (i > 0) printf(" ");
		printf("%d", A[i]);
	}
	printf("\n");
}

void selectionSort(int A[], int N){
	int count = 0;
	rep(i, N){
		int minj = i;
		FOR(j, i, N){
			if (A[j] < A[minj])
				minj = j;
		}
		if (i != minj){
			swap(A[i], A[minj]);
			count++;
		}
	}
	print(A, N);
	cout << count << endl;
}

int main() {

	int N;
	cin >> N;

	const int MAX_N = 10000;
	int A[MAX_N];
	rep(i, N){ cin >> A[i]; }

	selectionSort(A, N);

}