#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<bitset>
#include<utility>
#include<sstream>
#include<iomanip>
using namespace std;

#define ll long long
#define MP make_pair

int main(void) {

    int n;
    while(1){
        cin>>n;
        if(n==0)break;
        ll a[1000]={},sa=100000000;

        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);

        for (int i = 1; i < n; i++) {
            sa = min(sa,a[i]-a[i-1]);
        }

        cout<<sa<<"\n";
    }
    
    
    return 0;
}
