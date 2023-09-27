#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    int n,q,a,ans=0;
    cin>>n>>q;
    queue<pair<string,int> > s;
    pair<string,int> t;
    for(int i=0;i<n;i++){
        cin>>t.first>>t.second;
        s.push(t);
    }
    while(! s.empty()){
        t=s.front();
        s.pop();
        t.second-=q;
        ans+=q;
        if(t.second<=0){
            ans+=t.second;
            cout<<t.first<<' '<<ans<<endl;
            continue;
        }
        s.push(t);
    }
}
