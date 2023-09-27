#include<iostream>
#include<cstdio>
#include<algorithm>
#define INF 1000000001
#define MAX 500001

using namespace std;

int LEFT[MAX/2 + 2],RIGHT[MAX/2 + 2];
int if_counter=0;

void debug(int num){
    cout << num << endl;
}

void comb(int A[],int left,int mid,int right){
    int n1,n2;
    n1 = mid - left;
    n2 = right - mid;
    for (int i = 0; i < n1; i++) LEFT[i] = A[left + i];
    for (int i = 0; i < n2; i++) RIGHT[i] = A[mid + i];
    
    LEFT[n1] = INF;
    RIGHT[n2]= INF;
    
    int N = n1 + n2;
    int count_l=0,count_r=0;
    
    for (int i = 0; i < N; i++) {
        if (LEFT[count_l] <= RIGHT[count_r]) {
            A[left + count_l + count_r] = LEFT[count_l];
            count_l++;
        }else{
            A[left + count_l + count_r] = RIGHT[count_r];
            count_r++;
        }
        if_counter++;
    }
}

void divide(int A[],int left,int right){
    int mid = (left + right)/2;
    if (right - left > 1) {
        divide(A,left,mid);
        divide(A,mid,right);
        comb(A,left,mid,right);
    }
}

int main(){
    int n,A[MAX];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    divide(A,0,n);
    
    for (int i = 0; i < n-1; i++) {
        cout << A[i] << " ";
    }
    cout << A[n-1] << endl;
    cout << if_counter << endl;
    
    return 0;
}