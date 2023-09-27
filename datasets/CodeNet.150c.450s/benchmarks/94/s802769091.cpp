#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    int n;  cin>>n;
    vector<int> A(n);
    rep(i,n) cin>>A[i];
    int num=0;
    bool b=true;
    for(int i=0;b;++i){
        b=false;
        for(int j=n-1;j>=i+1;--j){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
                b=true;
                ++num;
            }
        }
    }
    for(int i=0;i<n-1;++i){
        cout<<A[i]<<" ";
    }
    cout<<A[n-1]<<endl;
    cout<<num<<endl;
}
