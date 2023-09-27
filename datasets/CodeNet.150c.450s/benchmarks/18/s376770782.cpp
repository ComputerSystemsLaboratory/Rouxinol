
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin >>n;
    ll ans=100000;
    for
    (int i=0; i<n; i++) {
        ans *= 1.05;
        ll hoge= ans - (ans%1000);
        if (ans%1000>0) {
            hoge+=1000;
        }
        ans = hoge;
    }
    cout << ans <<endl;
}