#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int co=0;
  for(int i=0;i<n;i++){
    int nu;
    cin >> nu;
    int f=0;
    for(int i=2;i*i<=nu;i++){
      if(nu%i==0){
	f=1;
	break;
      }
    }
    if(!f)co++;
  }
  cout << co << endl;
  return 0;
}