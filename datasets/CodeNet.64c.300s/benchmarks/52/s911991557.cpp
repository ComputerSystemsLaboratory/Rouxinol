#include <iostream>

using namespace std;

int pat(int n,int s,int d){
  if(n==0){
    if(s==0) return 1;
    else return 0;
  }
  if(d<0) return 0;

  return pat(n-1,s-d,d-1) + pat(n,s,d-1);
}

int main(){
  int n,s;
  while(cin>>n>>s&&(n>0||s>0)){
    cout << pat(n,s,9) << endl;
  }
}