#include<cstdio>
#include<iostream>
using namespace std;
int ans=0;
int n;
class Sumof4Integers{
    public:
        void solve(){ 
            dfs(0,0);
            printf("%d\n",ans);
        }
        void dfs(int d,int sum){ 
            if(d==4){
                if(n==sum)ans++;
                return;
            }
            for(int i=0;i<10;i++){
                dfs(d+1,sum+i);
            }
        }
};
int main(){ 
    Sumof4Integers inst;
    while(cin>>n){
        inst.solve();
        ans=0;
    }
}