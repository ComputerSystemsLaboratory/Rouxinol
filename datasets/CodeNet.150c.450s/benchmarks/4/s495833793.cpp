#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int m,f,r;
  while(true){
    cin>>m>>f>>r;
    if(m+f+r==-3) break;
    bool flg=false;
    if(m==-1){m=0;flg=true;}
    if(f==-1){f=0;flg=true;}
    int sum=m+f;
    if(flg||sum<30) cout<<"F"<<endl;
    else if(sum>=80) cout<<"A"<<endl;
    else if(sum>=65) cout<<"B"<<endl;
    else if(sum>=50) cout<<"C"<<endl;
    else if(sum>=30) r>=50?cout<<"C"<<endl:cout<<"D"<<endl;
  }
  return 0;
}