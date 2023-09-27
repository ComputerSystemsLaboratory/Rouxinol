#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

const ll LIM = 1e10;
vector<ll> a(100010);

bool check(int key,int index){
    if(a[index]>=key)return true;
    else return false;
}

int binary_search(int key){
    int ok,ng;
    ok=a.size();
    ng=-1;
    while(abs(ok-ng)!=1){
        int mid = (ok+ng)/2;
        if(check(key,mid)){
            ok = mid;
        }else ng = mid;
    }
    return ok;
}

int main(){
    int n;
    cin >> n;
    a.resize(n);
    fill(a.begin(),a.end(),LIM);
    int i;
    for(i=0;i<n;i++){
        ll x;
        cin >> x;
        int p=binary_search(x);
        a[p] = x;
    }
    for(i=0;i<n;i++){
        if(a[i]==LIM)break;
        //cout << a[i] << endl;
    }
    cout << i << endl;
    return 0;
}
