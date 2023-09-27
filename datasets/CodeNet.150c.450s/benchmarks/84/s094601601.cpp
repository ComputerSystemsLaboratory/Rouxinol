#include<bits/stdc++.h>
using namespace std;
/*
alias g='g++ -std=c++17 -O2 pra.cpp'
cd programming
cd cpp
cd practice

1≤n≤200,000
0≤ai≤109
aiはすべて異なる値である
5
3 5 2 1 4
*/
#define rep(i, n) for(int i=0; i<(n); i++)
using veci = vector<int>;
using ll = long long;
int a[200500];
ll counter=0;
int L[150000];
int R[150000];
int INF = INT_MAX;
void merge(int a[], int left, int mid, int right){
    int n1 = mid - left;//左側の個数
    int n2 = right - mid;//右側の個数
    for (int i=0; i<n1; i++) L[i] = a[left + i];
    for (int i=0; i<n2; i++) R[i] = a[mid + i];
    L[n1] = INF;//番兵
    R[n2] = INF;
    int i=0;
    int j=0;
    for (int k=left; k<right; k++){
        if (L[i] <= R[j]){
            a[k] = L[i];
            i++;
            
        }
        else{
            a[k] = R[j];
            j++;
            counter += n1 - i;//後ろから見てi番目の番号を加える
            //バブルソートは後ろの数を持って後ろから数えていく手法
        }
        
    }
}
void mergeSort(int a[], int left, int right){
    if (left+1 < right){//要素が一つになるまで分割する, 奇数なら左側に加える
        int mid = (left + right)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid, right);
        merge(a, left, mid, right);
    }
}
int main(){//計算量nlong(n)以下で反転数を求める
    int n; cin >> n;
    rep(i, n) cin >> a[i];
    mergeSort(a, 0, n);
    cout << counter << endl;
}
