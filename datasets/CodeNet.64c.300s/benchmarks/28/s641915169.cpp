#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    int W,H,x,y,r;   cin>>W>>H>>x>>y>>r;
    if(x>W-r||x<r){
        cout<<"No"<<endl;
        return 0;
    }
    if(y>H-r||y<r){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
}
