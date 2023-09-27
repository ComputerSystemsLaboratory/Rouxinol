#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<utility>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
 
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+9
#define EPS 1e-9
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = j; i < (k); i++)
typedef long long ll;
int main(){
    int n;
    vector<string> ok;
    scanf("%d",&n);
    rep(i,n){
        string str;
        cin >> str;
        ok.push_back(str);
    }
    int m;
    bool f = false;
    scanf("%d",&m);
    rep(i,m){
        bool c = false;
        string str;
        cin >> str;
        rep(j,n){
            if(ok[j] == str){
                (f) ? f = false : f = true;
                c = true;
                (f) ? printf("Opened by ") : printf("Closed by ");
            }
        }
        if(!c)printf("Unknown ");
        cout << str << endl;
    }
    return 0;
}