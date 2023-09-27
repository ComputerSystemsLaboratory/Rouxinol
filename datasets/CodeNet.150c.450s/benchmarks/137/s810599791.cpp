#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#define rep(i,a,b) for(int (i)=(a);i<(b);i++)
#define INF 100000000
#define MAX_N 1000000
using namespace std;

int main(){
    int n;
    string a,b;
    set<string>s;
    cin>>n;
    rep(i,0,n){
        cin>>a>>b;
        if(a=="insert"){
            s.insert(b);
        }else if(a=="find"){
            if(s.find(b)!=s.end())cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}