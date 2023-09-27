#include<cstdio>
#include<iostream>
#define MAX 100000
#define INF 1000000001
using namespace std;

struct Card {

    char suit;
    int value;
};

struct Card L[MAX/2+2], R[MAX/2+2];

void merge(struct Card C[], int left, int mid, int right) {

    int n1, n2, i, j, k;
    n1 = mid - left;
    n2 = right - mid;
    for (i = 0; i < n1; i++) {
	L[i].suit = C[left+i].suit;
	L[i].value = C[left+i].value;

    }
    for (i = 0; i < n2; i++) {
	R[i].suit = C[mid+i].suit;
	R[i].value = C[mid+i].value;

    }
    L[n1].value = INF;
    R[n2].value = INF;
    i = 0;
    j = 0;
    for (k = left; k < right; k++) {
	if (L[i].value <= R[j].value) {
	    C[k].suit = L[i].suit;
	    C[k].value = L[i].value;
	    i++;
	}
	else {
	    C[k].suit = R[j].suit;
	    C[k].value = R[j].value;
	    j++;
	}
    }
}

void mergeSort(struct Card C[], int left, int right) {
    if (left+1 < right) {
	int mid = (left + right ) / 2;
	mergeSort(C, left, mid);
	mergeSort(C, mid, right);
	merge(C, left, mid, right);
    }
}


bool isStable(struct Card C1[], struct Card C2[], int n) {
    for (int i = 0; i < n; i++) {
	if (C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int partition(struct Card C[], int p, int r) {
    int x, i, j;
    x = C[r].value;
    i = p-1;
    for (j = p; j < r; j++) {
	if (C[j].value <= x) {
	    i++;
	    Card t = C[i];
	    C[i] = C[j];
	    C[j] = t;		    
	}
    }
    Card t = C[i+1];
    C[i+1] = C[r];
    C[r] = t;
 
    return i+1;
}


void quickSort(struct Card C[], int p, int r) {
    if (p < r) {
	int q = partition(C, p, r);
	quickSort(C, p, q-1);
	quickSort(C, q+1, r);
    }
}

int main() {
    
    int n, i;
    Card C1[MAX], C2[MAX];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
	//??¨???
	scanf("%*c%c", &C1[i].suit);
	scanf("%d", &C1[i].value);
    }
    
    for(i = 0; i < n; i++) {
	C2[i] = C1[i];
    }
    quickSort(C1, 0, n-1);
    mergeSort(C2, 0, n);

    // output
    if (isStable(C1, C2, n)) printf("Stable\n");
    else printf("Not stable\n");

    for (i = 0; i < n; i++) printf("%c %d\n", C1[i].suit, C1[i].value);

}