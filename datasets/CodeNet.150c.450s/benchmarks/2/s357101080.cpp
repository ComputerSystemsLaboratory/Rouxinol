#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
//partition sort
vector<int> a,b;

int partition(int p,int r){
    int x = a[r];
    int i = p-1;
    for(int j=p;j<=r-1;j++){
        if(a[j]<=x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    b = a;
    return i+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    a.resize(n+1);
    rep(i,n) cin >> a[i+1];
    int q = partition(1,n);
    rep(i,n-1){
        if(i+1!=q) cout << a[i+1] << " ";
        else cout << "[" << a[i+1] << "]" << " ";
    }

    cout << a[n] << endl;
    return 0;
}

