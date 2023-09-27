//?????¢merge
#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 200000
#define INF 2000000000

using namespace std;

int LEFT[MAX/2+2],RIGHT[MAX/2+2];

long long s=0;

void Merge(int A[], int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    
    for (int i = 0; i < n1; i++) LEFT[i] = A[i+left];
    for (int i = 0; i < n2; i++) RIGHT[i] = A[i+mid];
    
    LEFT[n1] = INF;
    RIGHT[n2] = INF;
    
    int countL=0,countR=0;
    int N = n1 + n2;
    for (int i = 0; i < N; i++) {
        
        int plus = countL + countR;
        if (LEFT[countL] <= RIGHT[countR]) {
            A[left+plus] = LEFT[countL];
            countL++;
        }else{
            A[left+plus] = RIGHT[countR];//????????§?????¢?????????????????????????????°???n1 - countL
            s += n1-countL;
            countR++;
        }
    }
}

void MergeSort(int A[],int left ,int right){
    int mid = (left + right)/2;
    if (right - left > 1) {
        MergeSort(A,left,mid);
        MergeSort(A,mid,right);
    }
    Merge(A,left,mid,right);
}

int main(){
    int A[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    MergeSort(A,0,n);
    
    cout << s << endl;

    return 0;
}