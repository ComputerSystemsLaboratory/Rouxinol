#include<iostream>
using namespace std;

static const int INFTY = 2000000000;
static const int MAX_N = 100000;
static int cnt = 0;

struct Card {
    char suit;
    int value;
};

struct Card L[MAX_N / 2 + 2], R[MAX_N / 2 + 2];

int partition(Card A[], int p, int r) {
    auto x = A[r];
    int i = p - 1;
    int j = 0;
    Card tmp;
    
    for (j = p; j < r; j++) {
        if (A[j].value <= x.value) {
            i += 1;
            tmp = A[j];
            A[j] = A[i];
            A[i] = tmp;
        }
    }  

    tmp = A[r];
    A[r] = A[i + 1];
    A[i + 1] = tmp;
    return i + 1; 
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

void merge(Card A[], int left, int mid, int right) {
    auto n1 = mid - left;
    auto n2 = right - mid;
    auto i = 0;

    for (i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1].value = INFTY;
    R[n2].value = INFTY;

    i = 0;
    auto j = 0;

    for (int k = left; k < right; k++) {
        cnt += 1;
        if (L[i].value <= R[j].value) {
            A[k] = L[i];
            i += 1;
        } else {
            A[k] = R[j];
            j += 1;
        }
    }
}

void mergeSort(Card A[], int left, int right) {
    if  (left + 1 < right) {
        auto mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
    for(int i = 0; i < N; i++)
    {
        if (C1[i].suit != C2[i].suit) {
            return false;
        }        
    }
    return true;
}

void print(struct Card A[], int N) {
    for(int i = 0; i < N; i++)
    {
        cout << A[i].suit << " " << A[i].value << endl;
    }
}

int main() {
    Card C1[MAX_N], C2[MAX_N];
    int N;
    char ch;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> C1[i].suit >> C1[i].value;
    }
    
    for (int i = 0; i < N; i++) {
        C2[i] = C1[i];
    }

    quickSort(C1, 0, N - 1);
    mergeSort(C2, 0, N);

    auto stableStr = isStable(C1, C2, N) ? "Stable" : "Not stable";

    cout << stableStr << endl;

    print(C1, N);

    return 0;
}

