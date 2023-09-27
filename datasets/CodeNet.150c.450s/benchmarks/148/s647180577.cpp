#include "bits/stdc++.h"
using namespace std;
#define ff first
#define ss second
#define pb push_back
typedef long long ll;
#define db(x) cerr<<__LINE__<<": "<<#x<<" = "<<(x)<<'\n'
const int inf = 1e9+7;
const int N = 1e6+9;

int main() {
    ios_base::sync_with_stdio(0);
    int a,b,n;
    cin>>n;
    map<string, int> mp;
    while(n--) {
        string s;
        cin>>s;
        mp[s]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl;
    cout<<"WA x "<<mp["WA"]<<endl;
    cout<<"TLE x "<<mp["TLE"]<<endl;
    cout<<"RE x "<<mp["RE"]<<endl;
    return 0;
}