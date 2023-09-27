#include <iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>
using namespace std;

const double PI  =3.141592653589793238463;
#define pb push_back
#define pf push_front
#define sz(v)  ((int)(v).size());
#define all(v) ((v).begin()),((v).end())
typedef unsigned long long ull;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int,int> pi;
//2 7 3 4 9

void printVec(vi v1)
{
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);


 ll n;cin>>n;
 map<ll,ll>MAP;
 ll new_n=sqrt(n);

for(ll x=1;x<=new_n;x++){
    for(ll y=1;y<=new_n;y++){
        for(ll z=1;z<=new_n;z++){
    ll v=(x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(x*z);
    if(v>n){
        break;
    }
    MAP[v]++;

}
}
}

for(int i=1;i<=n;i++){
    cout<<MAP[i]<<endl;
}
    return 0;

}
