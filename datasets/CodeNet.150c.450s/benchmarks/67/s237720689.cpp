#include <iostream>

using namespace std;

int main(){
  int a[1001];
  a[0]=0;
  for(int i=1;i<=1000;i++){
    a[i]=a[i-1]+i;
  }
  while(1){
    int N;
    cin >> N;
    if(N==0)break;
    int count=0;
    for(int i=0;i<=1000;i++){
      for(int j=i+2;j<=1000;j++){
        if(a[j]-a[i]==N)count++;
      }
    }
    cout << count << endl;
  }
}

