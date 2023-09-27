#include<iostream>
#include<vector>
using namespace std;

int n,k,m;
int ans=0;
vector<int>s(10);

void bfs(int nn,int sum,int min){
    
    if(nn==0&&sum==0){
        ans++;
        return;
    }
    
    for(int i=min;i<10&&n>0;i++){
        if(sum-i>=0){
            bfs(nn-1,sum-i,i+1);
        }
    }
    
}

int main(){
    while(cin>>n>>m){
        if(n==0 && m==0)break;
        bfs(n,m,0);
        cout<<ans<<endl;
        ans=0;
        
    
    }
    return 0;
}
