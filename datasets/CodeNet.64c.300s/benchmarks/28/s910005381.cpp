#include<iostream>
using namespace std;
bool flag;
int w,h,x,y,r;
char ans[2][10]={
    "No",
    "Yes"
};
int solve(){
    if(x<=0||y<=0)return flag=0;
    if(r>h-r||r>w-r)return flag=0;
    if(x>=r&&x<=w-r){
        if(y>=r&&y<=h-r)return flag=1;
    }
    return flag=0;
}
int main()
{
    flag=0;

    cin>>w>>h>>x>>y>>r;
    solve();
    cout<<ans[flag]<<endl;
}