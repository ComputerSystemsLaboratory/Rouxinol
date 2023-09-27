#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int n,m;

int kitaichi(pair<int,int>* pd, int size){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += pd[i].first*pd[i].second;
    }
    return sum;
}

int solve(){
    pair<int,int> pd[10000];
    for(int i=0;i<n;i++){
        int d,p; cin >> d >> p;
        pd[i] = make_pair(p,d);
    }
    sort(pd,pd+n);
    reverse(pd,pd+n);
    int e = kitaichi(pd,n);
    int current = 0;
    while(m > 0 && current <= n-1){
        if(pd[current].second < m){
            m -= pd[current].second;
            e -= pd[current].second*pd[current].first;
            current++;
        }
        else{
            e -= m*pd[current].first;
            break;
        }
    }
    if(current > n-1)
        e = 0;
    return e;
}

int main(){
    while(cin >> n >> m && n!=0){
        cout << solve() << endl;
    }
}