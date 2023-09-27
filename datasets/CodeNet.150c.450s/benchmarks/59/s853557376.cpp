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
    vector<int> num(n);
    rep(i,n) cin>>num[i];
    for(int k=0;k<n-1;++k){
            cout<<num[k]<<" ";
        }
        cout<<num[n-1]<<endl;
    for(int i=1;i<n;++i){
        int x=num[i];
        int j=i-1;
        while(j>=0&&num[j]>x){
            num[j+1]=num[j];
            --j;
        }
        num[j+1]=x;
        for(int k=0;k<n-1;++k){
            cout<<num[k]<<" ";
        }
        cout<<num[n-1]<<endl;
    }
}
