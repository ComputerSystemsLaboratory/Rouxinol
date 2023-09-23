#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int A[100000];

int Partition(int p, int r){
    int x,i,j;
    x=A[r];
    i=p-1;
    for(j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

int main(void){
    int i,n,cen;
    cin >> n;
    for(i=0;i<n;i++) cin >> A[i];
    cen=Partition(0,n-1);
    for(i=0;i<n;i++){
    if(i==0) cout << A[i];
    else if(i==cen) cout << " [" << A[i] << "]";
    else cout << " " << A[i];
    }
    cout << endl;
    return 0;
}