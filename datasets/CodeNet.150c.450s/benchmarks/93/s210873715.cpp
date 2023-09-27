#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#include <vector>
#include <utility>
using P = pair<char,int>;
bool flag = true;
#define SENTINEL 1000000000
void Merge(vector<P>& A,int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<P> L(n1+1),R(n2+1);
    rep(i,n1){
        L[i] = A[left + i];
    }
    rep(i,n2){
        R[i] = A[mid + i];
    }
    L[n1].second = SENTINEL;
    R[n2].second = SENTINEL;
    int i = 0;
    int j = 0;
    for(int k=left;k<right;k++){
        if(L[i].second <= R[j].second){
            A[k] = L[i];
            i = i+1;
        }else{
            A[k] = R[j];
            j = j+1;
        }
    }
}
void MergeSort(vector<P>& A,int left,int right){
    if((left + 1) < right){
        int mid = (left+right)/2;
        MergeSort(A, left, mid);
        MergeSort(A, mid, right);
        Merge(A, left, mid, right);
    }
}
int partition(vector<P>& A,int p,int r){
    int x = A[r].second;
    int i = p-1;
    for(int j=p;j<r;j++){
        if(A[j].second <= x){
            i++;
            auto t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
    auto t = A[i+1];
    A[i+1] = A[r];
    A[r] = t;
    return i+1;
}
void quicksort(vector<P>& A,int p,int r){
    if(p < r){
        int q = partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}
int main(){
    int N;
    cin >> N;
    vector<P> A(N);
    rep(i,N){
        cin >> A[i].first >> A[i].second;
    }
    vector<P> v2(A.size());
    rep(i,N){
        v2[i].first = A[i].first;
        v2[i].second = A[i].second;
    }
    MergeSort(v2,0,N);
    quicksort(A,0,N-1);
    rep(i,N){
        if(!(v2[i].first == A[i].first))flag = false;
    }
    if(flag == false){
        cout << "Not stable" << endl;
    }else{
        cout << "Stable" << endl;
    }
    rep(i,N){
        cout << A[i].first << " " <<A[i].second << endl;
    }
    return 0;
}
