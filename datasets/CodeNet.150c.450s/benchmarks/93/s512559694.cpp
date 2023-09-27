#include<bits/stdc++.h>
using namespace std;

int partition(pair<char, int> A[],  int p, int r);
void swap(pair<char, int> *a, pair<char, int> *b);
void quicksort(pair<char, int> A[], int p, int r);

void merge(pair<char, int> A[], int left, int mid, int right);
void mergeSort(pair<char, int> A[], int left, int right);


#define M 100100

int n;

int main(){
    cin >> n;
    pair<char, int> A[M], B[M];
    char c;
    int num;
    for(int i = 0; i < n; i++){
        cin >> c >> num;
        A[i] = make_pair(c,num);
        B[i] = A[i];
    }

    quicksort(A, 0,n-1);
    mergeSort(B,0,n);

    bool stable = true;
    for(int i = 0; i < n; i++){
        if(A[i].first != B[i].first){
            stable = false; break;
        }
    }

    if(stable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    

    for(int i = 0; i < n; i++){
        cout << A[i].first << " " << A[i].second << endl;
    }
    
}

int partition(pair<char, int> A[],  int p, int r){
    pair<char, int> x = A[r];
    int i = p-1,j;
    for(j = p; j < r; j++){
        if(A[j].second <= x.second){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void swap(pair<char, int> *a, pair<char, int> *b){
    pair<char, int> w = *a;
    *a = *b; *b = w;
}

void quicksort(pair<char, int> A[], int p, int r){
    if(p < r){
        int q = partition(A, p,r);
        quicksort(A, p,q-1); quicksort(A, q+1,r);
    }
}

void merge(pair<char, int> A[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;

    pair<char, int> L[n1+10], R[n2+10];

    // 右側と左側に分割
    for(int i = 0; i < n1; i++){
        L[i] = A[left+i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = A[mid+i];
    }
    L[n1].second = INT_MAX; R[n2].second = INT_MAX;

    // 右側と左側の小さい方を取ってきて並べ替え
    int i = 0, j = 0;
    for(int k = left; k < right; k++){
        if(L[i].second <= R[j].second){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}


void mergeSort(pair<char, int> A[], int left, int right){
    if(left+1 < right){
        int mid = (left + right) /2;
        // 左側整頓
        mergeSort(A, left, mid);
        // 右側整頓
        mergeSort(A,mid, right);
        // まとめる
        merge(A,left, mid, right);
    }
}
