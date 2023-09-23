#include <iostream>
#include <algorithm>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int a=0, b=0, temp;
  loop(i,4){
    cin>>temp;
    a+=temp;
  }
  loop(i,4){
    cin>>temp;
    b+=temp;
  }
  cout<<max(a,b)<<endl;
  return 0;
}