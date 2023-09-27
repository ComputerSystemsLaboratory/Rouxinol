#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int c,t[3],i;
    cin>>c;
    while(c--){
        for(i=0;i<3;i++){
        cin>>t[i];
      }
      sort(t,t+3);
      if(t[0]*t[0]+t[1]*t[1]==t[2]*t[2]) {
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
    }
    return 0;
}