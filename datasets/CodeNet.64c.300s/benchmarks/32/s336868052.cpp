#include <iostream>
#include <stdio.h>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    long long sum=accumulate(a,a+n,0LL);
    cout<<a[0]<<" "<<a[n-1]<<" "<<sum<<endl;
    return 0;
}

