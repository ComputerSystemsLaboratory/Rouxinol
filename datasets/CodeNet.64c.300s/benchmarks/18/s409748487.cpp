#include<iostream>
using namespace std;

int a[10000];
int s;
int main(){
  while(cin >> s && s != 0){
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for(int i = 3; i < s + 1; ++i){
      a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    cout << ((a[s]/10)/365) + 1 <<endl;
  }
}
