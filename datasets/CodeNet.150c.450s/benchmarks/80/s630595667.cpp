#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d;
  int sum1,sum2;
  cin>>a>>b>>c>>d;
  sum1=a+b+c+d;
  cin>>a>>b>>c>>d;
  sum2=a+b+c+d;
  cout<<max(sum1,sum2)<<endl;
  return 0;
}