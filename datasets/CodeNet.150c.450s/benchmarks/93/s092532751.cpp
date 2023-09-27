#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
class card{
	char ch;
	int num;
public:
	card(){ this->ch = ' '; this->num = 0; }
	card(char a, int m){ this->ch = a, this->num = m; }
	void set(int m){ this->num = m; }
	void set(char a, int m){ this->ch = a, this->num = m; }
	void pirnt(){ cout << this->ch << ' ' << this->num << '\n'; }
	friend bool operator<=(card a, card b){
		return a.num <= b.num;
	}
	friend bool operator!=(card a, card b){
		return a.ch != b.ch || a.num != b.num;
	}
};
card A[100001];
card B[100001];
long n;
// MergeSort
void merge(long left, long mid, long right){
	long n1 = mid - left;
	long n2 = right - mid;
	card* L = new card[n1 + 1];
	card* R = new card[n2 + 1];
	for (long i = 0; i < n1; ++i) L[i] = B[left + i];
	for (long i = 0; i < n2; ++i) R[i] = B[mid + i];
	L[n1].set(20);
	R[n2].set(20);
	long i = 0, j = 0;
	for (long k = left; k < right; ++k){
		if (L[i] <= R[j]){
			B[k] = L[i]; ++i;
		}
		else{
			B[k] = R[j]; ++j;
		}
	}
	delete[] L;
	delete[] R;
}
void mergeSort(long left, long right){
	if (left + 1 < right){
		long mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}
// quickSort
long partition(long p, long r){
	long i = p - 1;
	for (long j = p; j < r; ++j) if (A[j] <= A[r]) swap(A[++i], A[j]);
	swap(A[i + 1], A[r]);
	return i + 1;
}
void quickSort(long p, long r){
	if (p < r){
		long q = partition(p, r);
		quickSort(p, q - 1);
		quickSort(q + 1, r);
	}
}
int main(){
	scanf("%ld",&n);
	for (long i = 0; i < n; ++i){
		char ch[2]; int tmp;
		scanf("%s %d",&ch,&tmp);
		A[i].set(ch[0], tmp);
		B[i].set(ch[0], tmp);
	}
	quickSort(0, n - 1);
	mergeSort(0, n);
	bool isStable = true;
	for (long i = 0; i < n; ++i){
		if (A[i] != B[i]){ isStable = false; break; }
	}
	if (isStable) cout << "Stable\n"; else cout << "Not stable\n";
	for (long i = 0; i < n; ++i) A[i].pirnt();
}