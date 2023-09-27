#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  vector<int> s(10005);
    for(long long int x=1;x<100;x++){
       for(long long int y=1;y<100;y++){
          for(long long int z=1;z<100;z++){
              int a= x*x + y*y + z*z + x*y + y*z + z*x;
              if(a>10000) continue;
              s[a]++;
          }
       }
    }
  for(int i=1;i<=N;i++){
    cout<<s[i]<<endl;
  }
}
   