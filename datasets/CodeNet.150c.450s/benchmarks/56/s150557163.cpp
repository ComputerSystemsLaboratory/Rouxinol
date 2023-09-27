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
    long long sum=0;
    rep(i,n){
        cin>>num[i];
        sum+=num[i];
    }
    cout<<*min_element(num.begin(),num.end())<<" "<<*max_element(num.begin(),num.end())<<" "<<sum<<endl;
}
