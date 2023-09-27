#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin >> n, n){
    int sum = 0;
    for(int i=2; i<n; i++){
      if((i%2) && !(n%i)){sum++;}
      if(!(i%2) && n%i == i/2){sum++;}
    }
    cout <<(sum+1)/2<<endl;
  }
  return 0;
}