#include <iostream>
using namespace std;

struct card {
    char mark;
    int number;
    int InputIndex;
};

int partition(card A[], int p, int r) {
    int x = A[r].number;
    int i = p - 1;
    
    for(int j = p; j < r; ++j) {
        if(A[j].number <= x) {
            ++i;
            card cpy = A[i];
            A[i] = A[j];
            A[j] = cpy;
        }
    }
    card cpy = A[r];
    A[r] = A[i + 1];
    A[i + 1] = cpy;
    
    return i + 1;
}

void QuickSort(card A[], int p, int r) {
    if(p < r) {
        int q = partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
}

int main(void) {
    card A[100000];
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> A[i].mark >> A[i].number;
        A[i].InputIndex = i;
    }
    
    QuickSort(A, 0, n - 1);
    
    bool flag = true;
    int k = 1;
    while(k < n) {
        if(A[k].number == A[k - 1].number && A[k].InputIndex < A[k - 1].InputIndex) {
            flag = false;
            break;
        }
        ++k;
    }
    
    if(flag) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    
    for(int i = 0; i < n; ++i) {
        cout << A[i].mark << ' ' << A[i].number << endl;
    }
    
    return 0;
}
