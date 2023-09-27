#include <bits/stdc++.h>
using namespace std;
int main(){
  char a[3];
  int b,d,n,sum;
  while(cin>>n,n!=0){
    b=d=sum=0;
    for(int i=0;i<n;i++){
      scanf("%s",a);
      if(b==1&&a[0]=='l')b--;
      else if(d==1&&a[0]=='r')d--;
      else if(a[0]=='l')b++;
      else if(a[0]=='r')d++;
      if(b==1&&d==1){sum++;b=0;d=0;}
    }
    cout<<sum<<endl;
}}