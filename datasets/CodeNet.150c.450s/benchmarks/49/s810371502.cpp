#include<iostream>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int main(){
  int N;
  
  while(cin>>N){
    if(N==0){
      break;
    }
    int max=0,min=1001,sum=0,a;
    for(int i=0;i<N;i++){
      cin >>a;
      if(max<a){ max=a; }
      if(min>a){ min=a; }
      sum+=a;
  }
    sum-=max;
    sum-=min;
    int ave = sum/(N-2);
    cout << ave <<endl;
  }

  return 0;
}