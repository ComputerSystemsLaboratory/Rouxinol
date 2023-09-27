#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;
int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0) return 0;
    int yk=0,h=0,m=0,ans=0;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      if(s=="lu") h++;
      else if(s=="ld") h--;
      else if(s=="ru") m++;
      else m--;
      int nans;
      if(h==m){
        if(h==0&&m==0) nans=0;
        else nans=1;
        if(yk!=nans){
          ans++;
          yk=nans;
        }
      }
    }
    cout<<ans<<endl;
  }
}

