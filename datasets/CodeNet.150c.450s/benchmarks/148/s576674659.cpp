#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const int MOD = 1000000007;
ll cnt =0,ans=0;

int main(){
int n;
    cin >> n;
string s;
map<string,int> mp;
for(int i=0;i<n;i++){
    cin >> s;
    mp[s]++;
}
cout << "AC x " << mp["AC"] << endl;
cout << "WA x " << mp["WA"] << endl;
cout << "TLE x " << mp["TLE"] << endl;
cout << "RE x " << mp["RE"] << endl;


}