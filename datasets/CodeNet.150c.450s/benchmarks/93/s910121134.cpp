#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <string>
using namespace std;

struct CARD {
	int number;
	char mark;
};

int partition(vector<CARD>& A, int p, int r) {
	int i,j,x=A[r].number;
	i=p-1;
	for(j=p; j<r; ++j) {
		if(A[j].number<=x) {
			++i;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}

void quickSort(vector<CARD>& A, int p, int r) {
	if(p<r) {
		int q;
		q=partition(A,p,r);
		quickSort(A,p,q-1);
		quickSort(A,q+1,r);
	}
	return;
}

int main() {
	int n;
	int i;
	bool stability=true;
	vector<CARD> A;
	map<int,queue<char> > M;

	cin >> n;
	A.resize(n);

	for(i=0; i<n; ++i) {
		cin >> A[i].mark >> A[i].number;
		M[A[i].number].push(A[i].mark);
	}
	quickSort(A,0,n-1);
	for(i=0; i<n; ++i) {
		stability=stability && (A[i].mark==M[A[i].number].front());
		M[A[i].number].pop();
	}
	printf((stability?"Stable\n":"Not stable\n"));
	for(i=0; i<n; ++i) {
		printf("%c %d\n",A[i].mark,A[i].number);
	}
	return 0;
}