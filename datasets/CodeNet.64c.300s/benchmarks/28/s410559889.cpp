#include<iostream>
using namespace std;

int main()
{
 int W,H,x,y,r,a,b,c,d;
 cin>>W>>H>>x>>y>>r;
 if(W>=x+r)a=1;else a=0;
 if(x-r>=0)b=1;else b=0;
 if(H>=y+r)c=1;else c=0;
 if(y-r>=0)d=1;else d=0;

 if(a==b&&c==d){
    if(a==c&&a==1){cout<<"Yes\n";
    }else cout<<"No\n";
 }else cout<<"No\n";
           
  return 0;
}