#include <iostream>

#define rangeOfValue 11000

using namespace std;

void counting_sort(int a[], int b[], int k);

int n;
int A[2000000];
int B[2000000];
int c[rangeOfValue];

int main(){
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }
    counting_sort(A,B,rangeOfValue);
    for (int i=0; i<n-1; i++) {
        cout<<B[i]<<" ";
    }
    cout<<B[n-1]<<endl;
}

void counting_sort(int a[], int b[], int k){
    for (int i=0 ; i<k; i++) {
        c[i] = 0;
    }

    for (int j=0; j<n; j++) {
        //cout<<c[a[j]]<<endl;
        c[a[j]]=c[a[j]]+1;
    }
    for (int i=1; i<k-1; i++) {
        c[i]=c[i]+c[i-1];
    }
//    for (int i=0; i<10; i++) {
//        cout<<c[i]<<" ";
//    }
//    cout<<endl;
    for (int j=n-1; j>=0; j--) {
        b[c[a[j]]-1] = a[j];
        c[a[j]]--;
    }
}