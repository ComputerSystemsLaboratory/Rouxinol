#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rep(i,n) for(int i=0;i<n;i++)
using vi=vector<int>;

int main(void){
    int n,m;
    while(cin>>n>>m,n|m){
        vi l;
        l.push_back(stoi(to_string(n+1000000).substr(7-m)));
        rep(i,20){
            string mx,mn;
            mx=mn=to_string(n+1000000).substr(7-m);
            sort(rall(mx));
            sort(all(mn));
            n=stoi(mx)-stoi(mn);
            auto itr=find(all(l),n);
            if(itr==l.end()){
                l.push_back(n);
            }else{
                cout<<(itr-l.begin())<<" "<<n<<" "<<i-(itr-l.begin())+1<<endl;
                break;
            }
        }
    }
}