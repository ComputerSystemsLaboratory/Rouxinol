#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n[5];

  for(int i=0;i<5;i++) cin>>n[i];

  sort(n, n+5);

  for(int i=0;i<5;i++){
      cout<<n[4-i];
      if(i==4) cout<<endl;
      else cout<<" ";
    }
	
  return 0;
}