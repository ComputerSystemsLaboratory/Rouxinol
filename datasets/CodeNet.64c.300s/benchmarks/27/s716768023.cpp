#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){

  int n, x, y;
  int c=0;

  while(cin>>n>>x && !(n==0 && x==0)){
    int c=0;

    for(int i=1; i<=n-2; i++){
      for(int j=i; j<=n-1; j++){
        for(int k=j; k<=n; k++){
          if(!(i==j || j==k || k==i)){
            y = i+j+k;
            if(y==x){
              c++;
            }
          }
        }
      }
    }
    cout<<c<<endl;
  }

}