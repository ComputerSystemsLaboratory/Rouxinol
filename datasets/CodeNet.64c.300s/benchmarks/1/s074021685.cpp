#include<iostream>
using namespace std;
#define MAX 100000
int A[MAX],n;

int partition(int p,int r){
    int a=0,b=0,t;
    int x=A[r];
    for(int i=p;i<=r;i++){
        if(A[i]<=x){
            t=A[a];
            A[a] = A[i];
            A[i]=t;
            a++;
        }
    }
    return a-1;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> A[i];
    int idx = partition(0,n-1);
    for(int i=0;i<n;i++){
        cout << (i?" ":"") << (i==idx?"[":"") << A[i] << (i==idx?"]":"");
    }
    cout << endl;
    return 0;
}

