#include<iostream>
using namespace std;
int main(){
  int d;
  while(cin >>d){
    int solve = 0;
    for(int i=d; i<600; i+=d)
      solve += d*i*i;
    cout <<solve<<endl;
  }
  return 0;
}