#include <iostream>
using namespace std;
int bub(char c[][2],int n){
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>i; j--) {
            if (c[j][1]<c[j-1][1]) {
                swap(c[j],c[j-1]);
            }
        }
    }
    return 0;
}

int sel(char k[][2],int n){
    for (int i=0; i<n; i++) {
        int minj=i;
        for (int j=i; j<n; j++) {
            if (k[j][1]<k[minj][1]) {
                minj=j;
            }
        }
        swap(k[minj],k[i]);
    }
    return 0;
}

int main() {
    char C[36][2];
    char K[36][2];
    int N;
    cin>>N;
    for (int i=0; i<N; i++) {
        cin>>C[i];
        K[i][0]=C[i][0];
        K[i][1]=C[i][1];
    }
    
    bub(C,N);
    for (int i=0; i<N-1; i++) {
        cout<<C[i][0]<<C[i][1]<<" ";
    }
    cout<<C[N-1][0]<<C[N-1][1]<<endl<<"Stable"<<endl;
    
    sel(K,N);
    bool flag=false;
    for (int i=0; i<N; i++) {
        if (C[i][0]!=K[i][0]) {
            flag=true;
            break;
        }
    }
    if(flag){
        for (int i=0; i<N-1; i++) {
            cout<<K[i][0]<<K[i][1]<<" ";
        }
        cout<<K[N-1][0]<<K[N-1][1]<<endl<<"Not stable"<<endl;
    }else{
        for (int i=0; i<N-1; i++) {
            cout<<K[i][0]<<K[i][1]<<" ";
        }
        cout<<K[N-1][0]<<K[N-1][1]<<endl<<"Stable"<<endl;
    }
}