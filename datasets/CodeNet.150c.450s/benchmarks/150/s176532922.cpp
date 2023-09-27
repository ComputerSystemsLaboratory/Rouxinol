#include<iostream>
#include<vector>
using namespace std;
vector<int> cs(vector<int> &a, int n){
    vector<int> b(n);
    vector<int> c(10001, 0);
    for(int i=0;i<n;++i) c[a[i]]++;
    for(int i=1;i<10001;++i) c[i]=c[i]+c[i-1];
    for(int i=n-1;i>=0;--i){
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
    return b;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    vector<int> b=cs(a,n);
    for(int i=0;i<n;++i) cout<<(i?" ":"")<<b[i];
    cout<<endl;
}