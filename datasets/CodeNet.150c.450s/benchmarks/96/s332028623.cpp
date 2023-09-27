#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<set>
#include<stack>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
    char ans[][10] = {
        {},
        {'.',',','!','?',' '},
        {'a','b','c'},
        {'d','e','f'},
        {'g','h','i'},
        {'j','k','l'},
        {'m','n','o'},
        {'p','q','r','s'},
        {'t','u','v'},
        {'w','x','y','z'}
    };
    ll n; cin >> n;
    rep(i,n){
        string s(100000,0);
        cin >> s;
        int temp = 0;
        int counter =-1 ;
        for(int k = 0;k<(int)s.size();k++){
            int now = int(s[k]-48);
            if(k == 0){temp = now;counter++;}
            else if(now != 0){
                temp = now;counter++;}
            if(now == 0){
                if(temp  == 9 || temp == 7)
                    counter%=4;
                else if(temp != 1&& temp != 7 && temp!= 9)
                    counter%=3;
                else if(temp == 1)
                    counter %=5;
                if(temp!=0)cout << ans[temp][counter];
                temp = 0;counter =-1;;
            }
        }
        cout << endl;
    }
    return 0;
}