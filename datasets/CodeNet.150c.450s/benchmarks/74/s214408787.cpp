#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <stack>
#include <queue>
#include <math.h>
using namespace std; 

int n,m,a[30][50001];
vector<int> c;

int solve(int i,int sum){
    if(sum>n){
        //cout<<i<<" "<<sum<<" "<<ans;
        return 50001;
    }
    if(a[i][sum]!=0)return a[i][sum];
    if(i==m&&sum==n)return 0;
    if(i==m)return 50001;
    else{
        a[i][sum]=min(solve(i+1,sum),solve(i+1,sum+c[i])+1);
        a[i][sum]=min(solve(i,sum+c[i])+1,a[i][sum]);
        return a[i][sum];
    }
}

int main(void){
    cin>>n>>m;
    c.resize(m,0);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    cout<<solve(0,0)<<endl;
    return 0;
}