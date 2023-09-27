#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
  cin>>n;
  int a[100001]={0};
  for(int i=1;i<=100;i++){
    for(int j=1;j<=100;j++){
      for(int k=1;k<=100;k++){
        a[((i+j)*(i+j)+(j+k)*(j+k)+(k+i)*(k+i))/2]++;
      }
    }
  }
  for(int i=1;i<=n;i++)
    if(a[i])
      cout<<a[i]<<endl;
  else
    cout<<0<<endl;
}