#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,K;
    cin>>N>>K;
    int a[N+100];
    for (int i=0;i<N;i++){
        cin>>a[i];
    }
    for (int i=0;i<N-K;i++){
        if (a[i]<a[i+K]){
            cout<<"Yes"<<endl;
            }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}