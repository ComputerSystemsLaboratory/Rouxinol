#include <iostream>
#include <math.h> 
using namespace std;
int freqarr[10001];
int main()
{
  int N;
  cin>>N;
  int x;
  
  for(int i=1;i<=sqrt(N);i++){
    for(int j=1;j<=sqrt(N);j++){
      for(int k=1;k<=sqrt(N);k++){
        x=(i*i) +(j*j) +(k*k)+ (i*j)+ (j*k)+ (i*k);
        if(x<=N){
          freqarr[x]++;
        }
        else{
          break;
        }
      }
      
    }
  }
  for(int i=1;i<=N;i++){
    cout<<freqarr[i]<<endl;
  }
  return 0;
}