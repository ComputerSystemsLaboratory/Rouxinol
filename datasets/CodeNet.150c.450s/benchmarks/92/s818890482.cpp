#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m){
    cout<<(int)log10((double)(n+m))+1<<endl;
  }
}