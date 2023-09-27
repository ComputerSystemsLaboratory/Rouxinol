#include<bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e11
int n, m, a[1<<18], t[1<<20] ;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v*2, tl, tm);
        build(v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int  q;

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


cin >> n >> q;

for(int i =0; i<n; i++){
    a[i]=0;
}
build(1,0,n-1);
while(q--){

    int x,l,r;
    cin >> x;
    if(x){
        cin >> l >> r;
        l--;r--;
        cout << sum(1,0,n-1,l,r) << endl;
    }
    else {
        cin >> l >> r;
        l--;
        a[l]+=r;
        update(1,0,n-1,l,a[l]);
    }


}





return 0;}

