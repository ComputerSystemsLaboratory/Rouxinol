#include <iostream>
#define MAX 1000000
using namespace std;

int main(){
   int tetra[181];
   int dp[MAX+1],dpodd[MAX+1];
   for(int i=0;i<MAX+1;i++) {dp[i]=i; dpodd[i]=i;}
   for(int i=1;i<181;i++){
      tetra[i-1] = i * (i+1) * (i+2) / 6;
   }
   for(int i=0;i<180;i++){
      int p = tetra[i];
      for(int j=0;p+j <= MAX;j++){
         if(dp[p+j] > dp[j]) dp[p+j] = dp[j] + 1;
         if(p%2 == 1){
            if(dpodd[p+j] > dpodd[j]) dpodd[p+j] = dpodd[j] + 1;
         }
      }
   }
   while(1){
      int n;
      cin >> n;
      if(n==0) break;
      cout << dp[n] << " " << dpodd[n] << endl;
   }
}