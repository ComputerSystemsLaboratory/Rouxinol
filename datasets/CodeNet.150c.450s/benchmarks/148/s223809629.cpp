#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define lld long double
#define w(x) ll x;cin>>x;while(x--)
#define mod 1000000007
#define speed ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int main(){
    speed;
    unordered_map<string,int> mp;
    w(n){
        string s;   cin>>s;
        mp[s]++;
    }
    cout<<"AC x "<<mp["AC"]<<'\n';
    cout<<"WA x "<<mp["WA"]<<'\n';
    cout<<"TLE x "<<mp["TLE"]<<'\n';
    cout<<"RE x "<<mp["RE"]<<'\n';
    return 0;
}