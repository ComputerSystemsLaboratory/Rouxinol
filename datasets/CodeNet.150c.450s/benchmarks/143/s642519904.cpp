#include <bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<iomanip>
using namespace std;

const double PI= acos(-1.0);

int gcd_func(int a, int b){
    return b? gcd_func(b, a%b) : a;
} 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n; cin >> n;
    map<long long,long long> mp;
    long long sm = 0;
    for(int i =0; i <n; i++){
        long long ipt;
        cin>>ipt;
        if(mp.find(ipt)!=mp.end()){
            mp[ipt]++;
        }else{
            mp[ipt] = 1;
        }
        sm+=ipt;
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        long long b,c; cin >> b >> c;
        long long diff = c-b;
        long long occ = 0;
        if(mp.find(b)!=mp.end()){
            occ = mp[b]; mp[b] = 0;
        }
        if(mp.find(c)!=mp.end()){
            mp[c]+=occ;
        }
        else{
            mp[c] = occ;
        }
        sm += occ*diff;
        cout << sm << endl;
    }
}