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
    string st;
    while(cin >> n,n){
        vector<int> tab(n);
        REP(i,n){
            cin >> st;
            if(st[1]=='u')tab[i]=1;
            else tab[i]=-1;
        }

        bool flg=false;
        int cou=0,sum=0;
        REP(i,n){
            sum+=tab[i];
            if(sum==2){
                if(!flg){
                    cou++;
                    flg=true;
                }
            }else if(sum==0){
                if(flg){
                    cou++;
                    flg=false;
                }
            }
        }
        cout << cou << endl;
    }
}

