//Quick Sort
#include <iostream>
#include <climits>

using namespace std;

struct Card {
    char suit;
    int num;
};

int partition(Card A[], int p, int r) {
    int x = A[r].num;
    int i = p - 1;
    for(int j = p; j < r; j++) {
        if(x >= A[j].num) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quickSort(Card A[], int p, int r) {
    if(p >= r) return;
    int x = partition(A, p, r);
    quickSort(A, p, x-1);
    quickSort(A, x+1, r);
}

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    Card L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].num = INT_MAX;
    R[n2].num = INT_MAX;
    int l = 0, r = 0;
    for (int i = left; i < right; i++) {
        if (L[l].num <= R[r].num) A[i] = L[l++];
        else A[i] = R[r++];
    }
}

void mergeSort(Card A[], int left, int right) {
    if(right > 1 + left) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

bool isStable(Card A1[], Card A2[], int n) {
    for(int i = 0; i < n; i++) {
        if(A1[i].suit != A2[i].suit) return false;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    Card A1[n], A2[n];
    for(int i = 0; i < n; i++) cin >> A1[i].suit >> A1[i].num;
    for(int i = 0; i < n; i++) {A2[i].suit = A1[i].suit; A2[i].num = A1[i].num;}

    quickSort(A1, 0, n - 1);
    mergeSort(A2, 0, n);

    if(isStable(A1, A2, n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    for(int i = 0; i < n; i++) {
        cout << A1[i].suit << " " << A1[i].num << endl;
    }
}
