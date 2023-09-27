#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<map>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define REP(i,n) for(ll i=0;i<n;i++)
#define FOR(i,m,n) for(ll i=m;i<n;i++)
#define REPR(i,n) for(ll i=n-1;i>=0;i--)
#define FORR(i,n,m) for(ll i=n-1;i>=m;i--)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 100000000
#define MOD 100000007
#define SIZE 100005
#define pi  3.14159265358979323846
 
int main(){

    ll a[6];
    REP(i,6){
        cin >> a[i];
    }
    string s;
    cin >> s;
    REP(i,(ll)s.size()){
        ll temp[6] = {0};
        if(s[i]=='S'){
            
            temp[0]=a[4];
            temp[4]=a[5];
            temp[5]=a[1];
            temp[1]=a[0];

            a[0]=temp[0];
            a[1]=temp[1];
            a[4]=temp[4];
            a[5]=temp[5];            
        }
        if(s[i]=='N'){
            
            temp[0]=a[1];
            temp[1]=a[5];
            temp[5]=a[4];
            temp[4]=a[0];

            a[0]=temp[0];
            a[1]=temp[1];
            a[4]=temp[4];
            a[5]=temp[5];            
        }
        if(s[i]=='E'){
            
            temp[0]=a[3];
            temp[3]=a[5];
            temp[5]=a[2];
            temp[2]=a[0];

            a[0]=temp[0];
            a[2]=temp[2];
            a[3]=temp[3];
            a[5]=temp[5];            
        }
        if(s[i]=='W'){
            
            temp[0]=a[2];
            temp[2]=a[5];
            temp[5]=a[3];
            temp[3]=a[0];

            a[0]=temp[0];
            a[2]=temp[2];
            a[3]=temp[3];
            a[5]=temp[5];        
        }        
        //cout << a[0] << endl;

    }
    cout << a[0] << endl;
}
