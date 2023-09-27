#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int n,count=0,temp;
  cin>>n;
  int main[n];
  for(int i=0;i<n;i++) main[i]=0;
  for(int x=1;x*x<10000;x++){
      for(int y=1;y*y<10000;y++){
          for(int z=1;z*z<10000;z++){
            temp=(x+z+y)*(x+z+y)-x*y-x*z-y*z;
            if(temp<=n && temp>=1) main[temp-1]=main[temp-1]+1;
            
    }
  }
}
for(int i=0;i<n;i++) cout<<main[i]<<'\n';
}