#include<iostream>
#include<string>
#include<vector>
#include<algorithm>//sort,reverse
#include<utility>//pair
#include<queue>//queue,priority_queue
#include<deque>//double_ended queue
#include<map>//map
using namespace std;
typedef long long LL; 
typedef pair<LL,LL> P;//Pでpair<-,->を表す。
const LL MAX=2000010;
const LL MOD=1000000007;
typedef map<LL,LL>::iterator Itr;

int main()
{ 
    LL D;
    cin>>D;
    LL c[26];
    for(int i=0;i<26;i++){
        cin>>c[i];
    }
    LL s[D][26];
    for(int i=0;i<D;i++){
        for(int j=0;j<26;j++){
            cin>>s[i][j];
        }
    }
    LL t[D];
    for(int i=0;i<D;i++){
        cin>>t[i];
        t[i]--;
    }
    LL ans[D];
    LL mem[26];
    for(int i=0;i<26;i++){mem[i]=0;}
    for(int i=0;i<D;i++){
        if(i==0){ans[i]=0;}
        else{ans[i]=ans[i-1];}
        ans[i]=ans[i]+s[i][t[i]];
        mem[t[i]]=i+1;
        for(int j=0;j<26;j++){
            ans[i]=ans[i]-(c[j]*(i+1-mem[j]));
        }
    }
    for(int i=0;i<D;i++){
        cout<<ans[i]<<endl;
    }
        return 0;
}