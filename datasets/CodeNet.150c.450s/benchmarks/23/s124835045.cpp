#include <iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<cstdlib>
#include<stdio.h>
using namespace std;
int n,a[50];
int solve(int i){
    if(i==1||i==0)return 1;
    return solve(i-1)+solve(i-2);
}
int main(){
    int n;
    cin>>n;
    int ans[50];
    ans[0]=1,ans[1]=1;
    for(int i=2; i<=n; i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    cout<<ans[n]<<endl;
    return 0;
}