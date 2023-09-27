#include<iostream>
using namespace std;
int main(){
  int num[201],log[1000001],logo[1000001];
  for(int i=1; i<200; i++){
    num[i] = i*(i+1)*(i+2)/6;
  }
  for(int i= 0; i<1000001; i++){
    log[i] = logo[i] = i;
    for(int j=1; j<201; j++){
      if(num[j]>i){break;}
      if(log[i]>log[i-num[j]]){log[i] = log[i-num[j]]+1;}
      if(num[j]%2){
	if(logo[i]>logo[i-num[j]]){logo[i] = logo[i-num[j]]+1;}
      }
    }
  }
  int n;
  while(cin >>n,n){
    cout <<log[n]<<" "<<logo[n]<<endl;
  }
  return 0;
}