#include<iostream>
using namespace std;

int main(){
  int n[10001],i=1,ans=0;
  while(1){
    cin >> n[i];
    if(n[i]==0){
      break;
    }
    i++;
    ans++;
  }
  for(i=1;i<=ans;i++){
    cout << "Case " << i << ": " << n[i] << '\n';
  }
  return 0;
}

