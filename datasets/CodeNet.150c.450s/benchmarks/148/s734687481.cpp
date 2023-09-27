#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
const int INFTY =2147483647;
int main(){
    int A[4]={};
    int n;
    string s;
    cin>>n;
    REP(i,n){
        cin>>s;
        if(s.compare("AC")==0) A[0]++;
        else if(s.compare("WA")==0) A[1]++;
        else if(s.compare("TLE")==0) A[2]++;
        else A[3]++;
    }
    cout<<"AC x "<<A[0]<<endl;
    cout<<"WA x "<<A[1]<<endl;
    cout<<"TLE x "<<A[2]<<endl;
    cout<<"RE x "<<A[3]<<endl;
}