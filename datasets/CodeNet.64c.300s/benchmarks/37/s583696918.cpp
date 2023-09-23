#include<iostream>
#include<algorithm>
using namespace std;
bool dfs(int i,int n){
    if(n<=0){
        if(n==0)return true;
        return false;
    }
    return dfs(i+1,n-i);
}
int main(){
    int n;
    while(cin>>n,n){
        int cnt=0;
        for(int i=1;i<n;i++){
            if(dfs(i,n))cnt++;
        }
        cout<<cnt<<endl;
    }
}