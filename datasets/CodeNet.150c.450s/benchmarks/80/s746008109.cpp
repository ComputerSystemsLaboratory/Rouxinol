#include <iostream>
#include <algorithm>
using namespace std;
int main () {
         int ans;
         int a,b;
         int S=0,T=0;
         for(int i=0;i<4;i++){
                 cin>>a;
                  S+=a;
          }
         for(int j=0;j<4;j++){
                   cin>>b;
                   T+=b;
          }
          ans=max(S,T);
           cout<<ans<<endl;
           return 0;
}