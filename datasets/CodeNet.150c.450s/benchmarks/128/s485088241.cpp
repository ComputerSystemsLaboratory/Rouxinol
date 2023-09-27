#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char c[21];
  cin>>c;
  for(int i=strlen(c)-1;i>=0;i--){
    cout<<c[i];
  }
  cout<<endl;
  return 0;
}