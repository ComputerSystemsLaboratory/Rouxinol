#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
typedef pair<int,string> P;

vector<P> a;
int n;
map<int,string> memo,memo2;


int partition(int p,int r){
    int x = a[r].first;
    int i = p-1;
    for(int j=p;j<=r-1;j++){
        if(a[j].first<=x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quicksort(int p, int r){
    if(p<r){
        int q = partition(p, r);
        quicksort(p, q-1);
        quicksort(q+1, r);
    }
}

void isStable(){
    rep(i,n) memo2[a[i+1].first] += a[i+1].second;
    bool ok = true;
    rep(i,n) if(memo[a[i+1].first] != memo2[a[i+1].first]) ok = false;
    cout << ( ok ? "Stable" : "Not stable") << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;

    a.resize(n+1);
    rep(i,n){
        cin >> a[i+1].second >> a[i+1].first;
        memo[ a[i+1].first ] += a[i+1].second;
    }
    quicksort(1,n);
    isStable();
    rep(i,n){
        cout << a[i+1].second << " " << a[i+1].first << endl;
    }
    return 0;
}

