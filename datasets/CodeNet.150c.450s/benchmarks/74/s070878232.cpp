#include <bits/stdc++.h>

using namespace std;

int ctos, son;
int A[10005];
int D[50005];

int main(){
    ios::sync_with_stdio(false);

    cin>>ctos>>son;
    for(int i=1; i<=son; i++){
        cin>>A[i];
    }

    for(int i=1;  i<=ctos; i++){
        D[i] = 50001;
        for(int k=1; k<=son; k++){
            if(A[k] > i)
                continue;
            D[i] = min(D[i], 1 + D[i - A[k]]);
        }
    }
    cout<<D[ctos]<<endl;
    return 0;
}