#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int ix;
int INF = 1001001001;

struct card{
    char suit;
    int value; 
};

int partitionx(vector<card> &A, int p, int r){
    int x = A[r].value;
    ix = p-1;
    for (int j = p; j < r; j++){
        if(A[j].value <= x){
            ix++;
            swap(A[ix], A[j]);
        }
    }
    swap(A[ix+1], A[r]);
    return ix+1;
}

void quickSortx(vector<card> &A, int p, int r){
    if (p < r){
        int q = partitionx(A, p, r);
        quickSortx(A, p, q-1);
        quickSortx(A, q+1, r);
    }
}

void mergex(vector<card> &A, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<card> L(n1+1), R(n2+1);
    rep(i, n1){
        L[i] = A[left+i];
    }
    rep(i, n2){
        R[i] = A[mid+i];
    }
    L[n1].value = INF;
    R[n2].value = INF;

    int i = 0;
    int j = 0;

    for(int k = left; k < right; k++){
        if (L[i].value <= R[j].value){
            A[k] = L[i];
            i += 1;
        } else {
            A[k] = R[j];
            j += 1;
        }
    }
    return;
}

void mergexSort(vector<card> &A, int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergexSort(A, left, mid);
        mergexSort(A, mid, right);
        mergex(A, left, mid, right);
    }
    return;
}

int main() {
    int n; cin >> n;

    vector<card> A(n), B(n);
    rep(i, n){
        cin >> A[i].suit >> A[i].value;
    }
    rep(i, n){
        B[i].suit = A[i].suit;
        B[i].value = A[i].value;
    }

    quickSortx(A, 0, n-1);
    mergexSort(B, 0, n);

    bool check = true;
    rep(i, n){
        if(A[i].suit != B[i].suit){
            check = false;
            cout << "Not stable" << endl;
            break;
        }
    }
    if(check) cout << "Stable" << endl;

    rep(i, n){
        cout << A[i].suit << " " << A[i].value << endl;
    }

    return 0;
}
