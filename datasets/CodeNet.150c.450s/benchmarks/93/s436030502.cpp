#include <iostream>

struct Card {char suit; int value;};

constexpr int MAXNUM = 100000;
constexpr int SENTINEL = 2000000000;


void merge(Card *A, int l, int m, int r) {
    int nl = m - l;
    int nr = r - m;
    Card L[MAXNUM / 2 + 2];
    Card R[MAXNUM / 2 + 2];

    for (int i = 0; i < nl; i++) {
        L[i] = A[l + i];
    }
    for (int i = 0; i < nr; i++) {
        R[i] = A[m + i];
    }
    L[nl].value = SENTINEL;
    R[nr].value = SENTINEL;
    int li = 0, ri = 0;
    for (int i = l; i < r; i++) {
        if(L[li].value <= R[ri].value) {
            A[i] = L[li++];
        }else {
            A[i] = R[ri++];
        }
    }
}

void mergeSort(Card *A, int l, int r) {
    if (l + 1 < r) {
        int m = (r + l) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m, r);
        merge(A, l, m, r);
    }
}



int partition(Card *A, int l, int r) {
    int p = A[r].value;
    int pi = l - 1;
    for (int i = l; i < r; i++) {
        if(A[i].value <= p) {
            pi++;
            std::swap(A[i], A[pi]);
        }
    }
    pi++;
    std::swap(A[r], A[pi]);
    return pi;
}

void quickSort(Card *A, int l, int r) {
    if (l < r) {
        int pi = partition(A, l, r);
        quickSort(A, l, pi-1);
        quickSort(A, pi+1, r);
    }
}

int main(int argc, char** argv){
    int n;
    Card A[MAXNUM], B[MAXNUM];
    std::cin >> n;
    for (int i = 0; i < n; i++){
        char c;
        int v;
        std::cin >> c;
        std::cin >> v;
        A[i].suit = B[i].suit = c;
        A[i].value = B[i].value = v;
    }

    mergeSort(A, 0, n);
    quickSort(B, 0, n - 1);

    int stable = 1;
    for (int i = 0; i < n; i++) {
        if (A[i].suit != B[i].suit) {
            stable = 0;
            break;
        }
    }

    if (stable) {
        std::cout << "Stable" << std::endl;
    }else {
        std::cout << "Not stable" << std::endl;
    }
    for (int i = 0; i < n; i++) {
        std::cout << B[i].suit << " " << B[i].value << std::endl;
    }

}
