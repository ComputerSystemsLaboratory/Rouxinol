#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string tarou,hanako;
  cin>>n;
  int t=0,h=0;
  for(int i=0;i<n;i++){
    cin>>tarou>>hanako;
    if(tarou>hanako) t+=3;
    else if(hanako>tarou) h+=3;
    else{
      t++;
      h++;
    }
  }
  cout<<t<<" "<<h<<endl;
  return 0;
}
    

