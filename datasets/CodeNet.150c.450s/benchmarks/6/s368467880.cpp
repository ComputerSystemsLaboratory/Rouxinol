#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if (a < b && b< c){
  cout<<"Yes"<<endl;
  } else if (a == b || b == c || a == c || a > b || b > c || a > c) {
  cout<<"No"<<endl;
  } return 0;
  }