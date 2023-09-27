#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int Y,M,D;
    cin >> Y >> M >> D;
    int count=0;
    bool ok=false;
    for(int j=1;j<=999;j++){
      for(int k=1;k<=10;k++){
        for(int l=1;l<=(j%3==0?20:(k%2==0?19:20));l++){
          if(Y==j&&M==k&&D==l)ok=true;
          if(ok)count++;
        }
      }
    }
    cout << count << endl;
  }
}

