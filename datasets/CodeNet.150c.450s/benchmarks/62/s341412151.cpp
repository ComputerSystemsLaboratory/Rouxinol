#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    vector<int> num(3);
    rep(i,3) cin>>num[i];
    sort(num.begin(),num.end());
    cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
}
