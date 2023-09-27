#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<iomanip>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    int a,b;    char c;
    vector<int> ans;
    while(true){
        cin>>a>>c>>b;
        if(c=='?') break;
        if(c=='+') ans.push_back(a+b);
        if(c=='-')ans.push_back(a-b);
        if(c=='*')ans.push_back(a*b);
        if(c=='/')ans.push_back(a/b);
    }
    rep(i,ans.size()){
        cout<<ans[i]<<endl;
    }
}
