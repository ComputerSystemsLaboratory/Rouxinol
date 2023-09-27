#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<long>ar(n);
        for(auto&e:ar){
                scanf("%ld",&e);
        }
        long long sum1=0;
        for(int i=0;i<n;i++){
                sum1+=ar[i];
        }
    sort(ar.begin(),ar.end());
    printf("%ld %ld %lld\n",ar[0],ar[n-1],sum1);
        return 0;
}