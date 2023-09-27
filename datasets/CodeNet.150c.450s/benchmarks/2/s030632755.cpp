#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int partition(vector<int> &v,int p,int r){
    int x=v[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(v[j]<=x){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[r]);
    return i+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int itr = partition(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << (i==itr?"[":"") << a[i] << (i==itr?"]":"") << (i!=n-1?" ":"\n");
    }
}

