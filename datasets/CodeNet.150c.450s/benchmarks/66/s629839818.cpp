#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    unordered_map<string,bool> user;
    string str;
    REP(i,n){
        cin >> str;
        user[str]=false;
    }
    int m;
    bool flg=false;
    cin >> m;
    REP(i,m){
        cin >> str;
        if(user.find(str)!=user.end()){
            flg=!flg;
            if(flg)cout << "Opened by "<<str << endl;
            else cout << "Closed by "<<str << endl;
        }else{
            cout << "Unknown "<<str<<endl;
        }
    }
}

