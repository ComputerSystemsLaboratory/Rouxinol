#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define sp <<" "<<
#define CST(x) cout<<fixed<<setprecision(x)
#define PI 3.14159265359
#define MOD 1000000007
using namespace std;
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using que_a = priority_queue<int, vector<int>, greater<int> >;
using que_d = priority_queue<int>;
using pint = pair<int,int>;

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && b < c) cyes;
    else cno;
    return 0;
}
