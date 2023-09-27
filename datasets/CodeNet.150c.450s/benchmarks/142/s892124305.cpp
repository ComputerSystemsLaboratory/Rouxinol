#include<iostream>
using namespace std;

int main(){
    long long N,K;
    cin>>N>>K;
    long long A[N+1];
    for(long long i=1;i<=N;i++){
        cin>>A[i];
    }
    for(int i=2;i+K-1<=N;i++){
        if(A[i-1]<A[i+K-1]){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}