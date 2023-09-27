#include <iostream>
using namespace std;
int main(){


  int n,a[10000],m,b,result=0,i,j;

  cin>>n;
  for(i=0;i<n;i++) cin>>a[i];
  cin>>m;
  for(i=0;i<m;i++){
    cin>>b;
    for(j=0;j<n;j++) if(b==a[j]){
        result++;
        break;
      }
  }

  cout<<result<<endl;

  return 0;

}