#include <iostream>
using namespace std;

int d[10];

bool dfs(int left, int right, int i)
{
    if(i==10){
        return true;
    }
    bool res=false;
    if(d[i]>left)res=res | dfs(d[i], right, i+1);
    if(d[i]>right)res=res | dfs(left, d[i], i+1);
    return res;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++)cin>>d[j];
        if(dfs(-1, -1, 0))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

