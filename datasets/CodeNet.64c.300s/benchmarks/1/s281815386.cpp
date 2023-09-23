#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define  all(x) (x).begin(),(x).end()
typedef long long ll;

#define MAX 100005

int partition(int A[], int p, int r){
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++){
        if (A[j] <= x){
            i++;
            swap(A[i], A[j]);
        }
    }
    i++;
    swap(A[i], A[r]);
    return i;
}

void print(int A[], int n, int q){
    rep(i,n){
        if (i) cout << " ";
        if (i == q) cout << "[";
        cout << A[i];
        if (i == q) cout << "]";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int A[MAX];
    rep(i,n) cin >> A[i];
    int q = partition(A, 0, n-1);
    print(A, n, q);
}
