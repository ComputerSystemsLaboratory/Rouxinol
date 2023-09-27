#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<bitset>
#include<functional>
#include<climits>
using namespace std;
typedef pair<int,int>pii;
const int INF=1e9;
const int dx[]={0,-1,0,1},dy[]={-1,0,1,0};



int main(){
    int x,y,s;
    while(cin>>x>>y>>s,x||y||s){
        int ma=0;
        for(int i=1;i<1000;i++){
            for(int j=1;j<1000;j++){
                int v1=1.0*i*(100+x)/100;
                int v2=1.0*j*(100+x)/100;
                if(v1+v2!=s)continue;
                v1=1.0*i*(100+y)/100;
                v2=1.0*j*(100+y)/100;
                ma=max(ma,v1+v2);
            }
        }
        cout<<ma<<endl;
    }
    return 0;
}