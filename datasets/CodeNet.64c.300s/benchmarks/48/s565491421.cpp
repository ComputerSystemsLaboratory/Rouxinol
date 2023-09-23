#include<iostream>
using namespace std;
int a[1000000];
int sum[1000000];
int n;
int main(){
 for (int i=2;i<1000000;i++){
  if (!a[i])
   for (int j=i*2;j<1000000;j+=i)
    a[j]=1;
 }
 for (int i=2;i<1000000;i++) sum[i]=sum[i-1]+(a[i]==0?1:0);
 while (cin>>n)
  cout<<sum[n]<<endl;
 return 0;
}
