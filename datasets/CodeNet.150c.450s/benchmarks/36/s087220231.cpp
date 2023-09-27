#include<bits/stdc++.h>
using namespace std;
int main(){
  int d;
  while(cin>>d){
    int men=0;
    for(int j=d;j<600;j+=d)
      men+=d*(600-j)*(600-j);
    cout<<men<<endl;
  }
  return 0;
}