#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;
 
pair<int,char> a[100001],b[100001];
int partition(int l,int r){
    int x=a[r].first,cur=l-1;
    FOR(i,l,r)if(a[i].first<=x){
        ++cur;
        swap(a[cur],a[i]);
    }
    ++cur;
    swap(a[cur],a[r]);
    return cur;
}
void quicksort(int l,int r){
    if(l<r){
        int mid=partition(l,r);
        quicksort(l,mid-1);
        quicksort(mid+1,r);
    }
}
bool cmp(pair<int,char> a,pair<int,char> b){
    return a.first<b.first;
}
int main(){
    int n;
    cin>>n;
    rep(i,n) cin>>a[i].second>>a[i].first,b[i]=a[i];
    quicksort(0,n-1);
    stable_sort(b,b+n,cmp);
    bool flag=true;
    rep(i,n)if(a[i].second!=b[i].second) flag=false;
    if(flag) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    rep(i,n) cout<<a[i].second<<" "<<a[i].first<<endl;
    return 0;
}
