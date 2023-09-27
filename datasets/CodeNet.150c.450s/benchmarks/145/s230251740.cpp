#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int mc=0,ml=0;
    map<string, int> m;
    string s,a,b;
    while(cin>>s){
        m[s]++;
        if (mc<m[s]) {
            mc=m[s];
            a=s;
        }
        if (ml<s.length()){
            ml=s.length();
            b=s;
        }

    }
    cout<<a<<" "<<b<<"\n";
    return 0;
}