#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<iomanip>
#include<numeric>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    int n;  cin>>n;
    vector<int> num(n);
    int num1;
    rep(i,n) cin>>num[i];
    rep(i,n){
        cout<<num[n-1-i];
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
}
