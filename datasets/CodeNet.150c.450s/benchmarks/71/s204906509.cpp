#include <iostream>

using namespace std;

int main(){
  int n;
  while(cin >> n){
    int res = 0;
    for(int i=0;i<10000;i++){
       int s = 0;
       for(int t=i;t;t/=10) s += t%10;
       if(s==n) res++;
    }
    cout << res << endl;
  }
}