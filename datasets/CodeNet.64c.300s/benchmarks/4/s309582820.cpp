#include<iostream>
using namespace std;
char ans[2][10]={
    "No\n",
    "Yes\n"
};
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=0;
    if(a<b)if(b<c)flag=1;
    cout<<ans[flag];
}