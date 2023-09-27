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

struct Card{ char suit, value; };

bool operator==(const Card& lhs, const Card& rhs)
{
	return lhs.suit == rhs.suit && lhs.value == rhs.value;
}

void print(Card A[], int N){
	rep(i, N){
		if (i > 0) printf(" ");
		cout << A[i].suit << A[i].value;
	}
	printf("\n");
}

void selectionSort(Card A[], int N){
	int count = 0;
	rep(i, N){
		int minj = i;
		FOR(j, i, N){
			if (A[j].value < A[minj].value)
				minj = j;
		}
		if (i != minj){
			swap(A[i], A[minj]);
			count++;
		}
	}
}

void bubbleSort(Card A[], int N){
	int count = 0;

	bool flag = true;
	while (flag){
		flag = false;
		for (int i = N - 1; i >= 1; i--){
			if (A[i].value < A[i - 1].value){
				swap(A[i], A[i - 1]);
				flag = true;
				count++;
			}
		}
	}
}


bool isStable(Card in[], Card out[], int N){

	FOR(i1, 0, N)
	FOR(i2, i1 + 1, N)
	FOR(o1, 0, N)
	FOR(o2, o1 + 1, N){
		if (in[i1].value == in[i2].value && in[i1] == out[o2] && in[i2] == out[o1])
			return false;
	}
	return true;
}

int main() {

	int N;
	cin >> N;

	const int MAX_N = 10000;
	Card A[MAX_N];

	rep(i, N){ cin >> A[i].suit >> A[i].value; }

	Card C1[MAX_N];
	Card C2[MAX_N];

	rep(i, N){ C1[i] = A[i]; C2[i] = A[i]; }

	bubbleSort(C1, N);
	selectionSort(C2, N);

	print(C1, N);
	cout << (isStable(A, C1, N) ? "Stable" : "Not stable") << endl;
	print(C2, N);
	cout << (isStable(A, C2, N) ? "Stable" : "Not stable") << endl;
}