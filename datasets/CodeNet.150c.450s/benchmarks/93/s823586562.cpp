//
// Created by ?????°?????? on 2016/03/27.
//

#include <iostream>
#include <vector>
using namespace std;

//quicksort
int partition(pair<char,int>A[],int p,int r){
    int x = A[r].second;
    int i = p -1;
    for (int j = p; j < r ; j++) {
        if(A[j].second <= x){
            i ++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i + 1;
}

void quicksort(pair<char,int> A[] ,int p,int r){
    if(p < r) {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

//mergesort
const int MAX = 500000;
const int SENTINEL = 2000000000;
pair<char,int> S[MAX/2 + 2],T[MAX/2 + 2];

void merge(pair<char,int> P[],int alpha,int gamma,int beta){
    int n1 = gamma - alpha;
    int n2 = beta - gamma;
    for (int i = 0; i < n1 ; ++i)S[i] = P[alpha + i];
    for (int i = 0; i < n2 ; ++i)T[i] = P[gamma + i];
    S[n1].second = SENTINEL;
    T[n2].second = SENTINEL;
    int i=0; int j=0;
    for (int k = alpha; k < beta ; ++k) {
        if(S[i].second <= T[j].second){
            P[k] = S[i];
            i++;
        }else{
            P[k]= T[j];
            j++;
        }
    }
}

void mergesort(pair<char,int> P[],int alpha,int beta){
    if(alpha + 1 < beta){
        int gamma = (alpha + beta)/2;
        mergesort(P,alpha,gamma);
        mergesort(P,gamma,beta);
        merge(P,alpha,gamma,beta);
    }
}
bool isStable(pair<char,int>A[],pair<char,int>B[],int n){
    for (int i = 0; i < n ; ++i) {
        if(A[i] != B[i]) return false;
    }
}

int main () {
    int n;
    pair <char,int> A[100000];
    pair <char,int> B[100000];
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> A[i].first >> A[i].second;
    for (int i = 0; i < n ; ++i) B[i] = A[i];

    quicksort(A,0,n-1);
    mergesort(B,0,n);

    if(isStable(A,B,n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    for (int i = 0; i < n ; ++i) cout <<  A[i].first << " " << A[i].second << endl;
    return 0;
}