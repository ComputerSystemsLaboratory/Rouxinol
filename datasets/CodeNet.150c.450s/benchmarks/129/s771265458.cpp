#include <iostream>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y ;
  int num,a;
  int b[100]={0};
  for(int i=0 ; i<x ; i++ ){
    num=0;
    for(int j=0 ; j<y ; j++ ){
      cin >> a;
      num+=a;
      cout << a <<" ";
      b[j]+=a;
     }
     b[y]+=num;
     cout<<num<<endl;
  }
  for(int i=0 ; i<y+1 ; i++ ){
    if( i!=y )
      cout << b[i] <<" ";
    else
      cout<<b[i] << endl;
  }
}