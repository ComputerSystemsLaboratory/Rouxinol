// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// using Bint = mp::cpp_int;
// using Real = mp::number<mp::cpp_dec_float<1024>>;

struct Card {
    char s;
    int v;
};


void merge(vector<Card> &A, int left, int mid, int right){
    int n1 = mid - left, n2 = right - mid;
    vector<Card> L(n1 + 1), R(n2 + 1);
    rep(i, n1) L[i] = A[left + i];
    rep(i, n2) R[i] = A[mid + i];
    L[n1].v = INF;
    R[n2].v = INF;
    int i = 0, j = 0;
    for(int k = left; k < right; k++){
        if(L[i].v <= R[j].v){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<Card> &A, int left, int right){
    if(right - left > 1){
        int mid = (left + right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}


int partition(vector<Card> &A, int p, int r){
    int x = A[r].v;
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(A[j].v <= x){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quickSort(vector<Card> &A, int p, int r){
    if(p < r){
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main(){
    int N;
    cin >> N;
    vector<Card> A(N), B(N);
    rep(i, N) {
        cin >> A[i].s >> A[i].v;
    } 
    B = A;
    quickSort(A, 0, N - 1);
    mergeSort(B, 0, N);

    bool flag = true;
    rep(i, N){
        if(A[i].s != B[i].s){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    rep(i, N){
        cout << A[i].s << ' ' << A[i].v << endl;
    }
}
