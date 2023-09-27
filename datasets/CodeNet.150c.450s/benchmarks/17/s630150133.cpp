#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
#define int long long
signed main(){
        int a,b,c,d,e;
        while( scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e) != EOF ){
                vector<int> data{a,b,c,d,e};
                sort(data.begin(), data.end());
                printf("%lld %lld %lld %lld %lld\n", data[4], data[3], data[2], data[1], data[0]);
        }
        return 0;
}