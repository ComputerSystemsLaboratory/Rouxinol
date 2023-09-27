#include<iostream>
using namespace std;

#define MAX 1000000001
#define SIZE 500001

int S[SIZE];
int count = 0;
int n;

void print(){
    for(int i = 0; i < n; i++){
        if(i != 0)  cout << " ";
        cout << S[i];
    }
    cout << endl;
    cout << count << endl;
}

void merge(int A[], int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    int L[n1+1];
    int R[n2+1];
    for(int i = 0; i < n1; i++) L[i] = A[left+i];
    for(int i = 0; i < n2; i++) R[i] = A[mid+i];
    L[n1] = MAX;
    R[n2] = MAX;

    int li = 0;
    int ri = 0;

    for(int i = left; i < right; i++){
        if(L[li] <= R[ri]){
            A[i] = L[li];
            li++;
        }else{
            A[i] = R[ri];
            ri++;
        }
        count++;
    }
}

void mergeSort(int A[], int left, int right){
    if(left+1 < right){
        int mid = (left+right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)  cin >> S[i];
    mergeSort(S,0,n);
    print();
    return 0;
}
