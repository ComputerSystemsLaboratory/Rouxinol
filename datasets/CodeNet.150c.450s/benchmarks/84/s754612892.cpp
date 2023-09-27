#include <bits/stdc++.h>
using namespace std;

void doc(){
    freopen("OB.inp","r", stdin);
    freopen("OB.out","w", stdout);
}

long long res = 0;

void MergeSort(vector<int> &A, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> L(n1), R(n2);
    for(int i = 0; i < n1; i++) L[i] = A[i + l];
    for(int i = 0; i < n2; i++) R[i] = A[mid + i + 1];
    L.push_back(1e9 + 1);
    R.push_back(1e9 + 1);
    int i = 0, j = 0;
    //cout << l << " " << r << " ";
    for(int k = l; k <= r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
            res += n1 - i;
        }
    }
   // cout << res << '\n';
}

void Merge(vector<int> &A, int l, int r){
    if (l >= r) return;
    //cerr << l << " " << r << '\n';
    int mid = (l + r) >> 1;
    Merge(A, l, mid);

    Merge(A, mid + 1, r);

    MergeSort(A, l, mid, r);
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    a.clear();
    for(int i = 0; i < n; i++)
        cin >> a[i];
    Merge(a, 0, n - 1);
//    for(int i = 0; i < n; i++) cout << a[i] << " ";
//    cout << '\n';
    cout << res << '\n';
}

int main(){
  //  ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
   // doc();
    solve();
}

