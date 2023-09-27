#include <bits/stdc++.h>

using namespace std;

vector<pair<char, int> > A(100009);
vector<pair<char, int> > B(100009);
int n;

void merge(int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<pair<char, int> > L(n1+1);
    vector<pair<char, int> > R(n2+1);
    for(int i = 0; i < n1; i++){
        L[i] = B[left+i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = B[mid+i];
    }
    pair<char, int> inf; inf.first = 'U'; inf.second = 1000000009;
    L[n1] = inf;
    R[n2] = inf;
    int i = 0;
    int j = 0;
    for(int k = left; k < right; k++){
        if(L[i].second <= R[j].second){
            B[k] = L[i];
            i++;
        }else{
            B[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid, right);
        merge(left, mid, right);
    }
}

int partition(int p, int r){
    pair<char, int> x = A[r];
    int i = p - 1;
    pair<char, int> temp;
    for(int j = p; j < r; j++){
        if(A[j].second <= x.second){
            i++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    A[r] = A[i+1];
    A[i+1] = x;
    return i+1;
}

void quickSort(int p, int r){
    if(p < r){
        int q = partition(p, r);
        quickSort(p, q - 1);
        quickSort(q + 1, r);
    }
}

bool isStable(){
    for(int i = 0; i < n; i++){
        if(A[i].first != B[i].first || A[i].second != B[i].second) return false;
    }
    return true;
}

int main(void){
    cin >> n;
    pair<char, int> temp;
    for(int i = 0; i < n; i++){
        cin >> temp.first >> temp.second;
        B[i] = temp;
        A[i] = temp;
    }
    quickSort(0, n-1);
    mergeSort(0, n);
    if(isStable()){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    for(int i = 0; i < n; i++){
        cout << A[i].first << " " << A[i].second << endl;
    }
    return 0;
}
