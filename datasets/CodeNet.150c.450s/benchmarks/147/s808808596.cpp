#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N;

  cin>>N;

  int a[10005]={ };

  for(int i=1;i<=sqrt(N);i++){
    for(int j=1;j<=sqrt(N);j++){
      for(int k=1;k<=sqrt(10005);k++){

        if(i*i+j*j+k*k+i*j+i*k+j*k<=N){
          a[i*i+j*j+k*k+i*j+i*k+j*k]++;
        }
      }
    }
  }

  for(int i=1;i<=N;i++){

    cout<<a[i]<<endl;
    
  }

  return 0;
}
