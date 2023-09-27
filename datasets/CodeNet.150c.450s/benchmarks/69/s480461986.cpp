#include <iostream>
#define _for(i,a,b) for(int i = (a); i < b; ++i)
#define _rep(i,a,b) for(int i = (a); i <= b; ++i)
using namespace std;
int a[10+2];
bool flag = 0;
void dfs(int i, int l, int r){
    if(flag) return;
    if(i == 10) {
        flag = 1;
        return;
    }
    if(a[i] > l) dfs(i+1, a[i], r);
    if(a[i] > r) dfs(i+1, l, a[i]);
}
int main(){
    int n;
    cin>>n;
    while(n--){
        flag = 0;
        _for(i,0,10) cin>>a[i];
        dfs(0,0,0);
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

