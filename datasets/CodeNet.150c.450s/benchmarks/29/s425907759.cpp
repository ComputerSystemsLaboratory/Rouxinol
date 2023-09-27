#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;
 
list<int> ls;
int main(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,x;
    cin>>n;
    string s;
    rep(i,n){
        cin>>s;
        if(s=="insert"){
            cin>>x;ls.push_front(x);
        }
        else if(s=="deleteFirst") ls.pop_front();
        else if(s=="deleteLast") ls.pop_back();
        else{
            cin>>x;
            for(list<int>::iterator it=ls.begin();it!=ls.end();++it){
                if(*it==x){
                    ls.erase(it);
                    break;
                }
            }
        }
    }
    int cnt=0;
    int sz=ls.size();
    for(list<int>::iterator it=ls.begin();it!=ls.end();++it){
        cout<<*it<<(cnt+1==sz?"":" ");
        ++cnt;
    }
    cout<<endl;
    return 0;
}
