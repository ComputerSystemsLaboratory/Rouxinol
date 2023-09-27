//Next Mayor
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n, p;
  while(true){
    cin>>n>>p;
    if(n==0 && p==0)break;
    ll turn=0;
    int a[n], pn=p;
    memset(a, 0, sizeof(a));
    while(true){
      if(pn!=0){
        a[turn%n]++;
        pn--;
      }
      else{
        pn=a[turn%n];
        a[turn%n]=0;
      }
      if(a[turn%n]==p)break;
      turn++;
    }
    cout<<turn%n<<endl;
  }
  return 0;
}