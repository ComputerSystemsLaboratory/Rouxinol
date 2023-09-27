#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
ll a[205];
string s;

void meow(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>s;
    vector<ll> t;
    for(int i=n-1;i>=0;i--){
        ll c=a[i];
        for(ll &x:t){
            c=min(c,c^x);
        }
        if(c){
            if(s[i]=='1'){
                cout<<"1\n";
                return;
            }
            t.push_back(c);
        }
    }
    cout<<"0\n";
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;
    while(T--){
        meow();
    }

    return 0;
}