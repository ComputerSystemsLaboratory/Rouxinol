#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cou;

void merge(vector<ll> &v,ll l,ll r){
    ll mid = (r+l)/2;
    ll n1 = mid-l;
    ll n2 = r-mid;
    vector<ll> a,b;
    for(ll i=0;i<n1;i++)a.push_back(v[l+i]);
    for(ll i=0;i<n2;i++)b.push_back(v[mid+i]);
    a.push_back(1e9);
    b.push_back(1e9);
    ll aa=0,bb=0;
    for(ll i=l;i<r;i++){
        if(a[aa]<b[bb]){
            v[i]=a[aa++];
        }else{
            v[i]=b[bb++];
            cou+=n1-aa;
        }
    }
}
void merge_sort(vector<ll> &v,ll l,ll r){
    if(r-l>1){
        ll mid = (r+l)/2;
        merge_sort(v,l,mid);
        merge_sort(v,mid,r);
        merge(v,l,r);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin >> a[i];
    merge_sort(a,0,n);
    cout << cou << endl;
}

