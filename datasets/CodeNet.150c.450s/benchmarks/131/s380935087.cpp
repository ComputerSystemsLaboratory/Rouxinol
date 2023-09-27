#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>

typedef long long int ll;
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
using namespace std;
int main(void){
    string s;
    int n;
    while(cin>>s>>n&&(n||s!="0")){
        map<string,int> mp;
        for(int i=1;;i++){
            if(mp[s]==0)mp[s]=i;
            else {
                cout<<mp[s]-1<<" "<<s<<" "<<i-(mp[s])<<endl;
                break;
            }
            while(s.size()<n)s+="0";
            sort(s.begin(),s.end());
            ll mi=stol(s);
            sort(s.rbegin(),s.rend());
            ll ma=stol(s);
            
            ll next=ma-mi;
            s=to_string(next);
        }
    }
    
}

