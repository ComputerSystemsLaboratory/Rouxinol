#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

typedef struct{
	char suit;
	int num;
}Card;

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int i, j, k;
    Card L[n1+1], R[n2+1];

    for(int i = 0; i < n1; i++)
        L[i] = A[left + i];
    for(int i = 0; i < n2; i++)
        R[i] = A[mid + i];
    L[n1].num = R[n2].num = INT_MAX;

    i = j = 0;
    for (k = left; k < right; k++) {
        if (L[i].num <= R[j].num) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void mergeSort(Card A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int partition(Card A[], int p, int r){
	int x = A[r].num;
	int i = p-1;
	for(int j = p; j < r; j++){
		if(A[j].num <= x){
			i++;
			swap(A[i], A[j]);
		}
	}
	i++;
	swap(A[i], A[r]);
	return i;
}

void quickSort(Card A[], int p, int r){
	if(p < r){
		int q = partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}

int main(){
	int n;
	cin >> n;
	Card Q[n], M[n];
	map<int, string> m;
	r(i, n){
		cin >> M[i].suit >> M[i].num;
		Q[i] = M[i];

	}
	quickSort(Q, 0, n-1);
	mergeSort(M, 0, n);

	bool isStable = true;
	r(i, n){
		if(Q[i].suit != M[i].suit){
			isStable = false;
			break;
		}
	}
	printf(isStable ? "Stable\n" : "Not stable\n");
	r(i, n){
		cout << Q[i].suit << ' ' << Q[i].num << endl;
	}
	return 0;
}
