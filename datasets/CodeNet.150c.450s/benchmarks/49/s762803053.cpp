#include<iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n && n){
    int min=1000;
    int max=0;
    int sum=0;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      sum+=a;
      if(min > a) min = a;
      if(max < a) max = a;
    }
    cout<<(sum-min-max)/(n-2)<<endl;
  }
  return 0;
}