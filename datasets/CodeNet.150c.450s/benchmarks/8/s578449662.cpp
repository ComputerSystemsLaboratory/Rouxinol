#include <iostream>
using namespace std;
int main() {
  int n,t_p=0,h_p=0;
  string taro,hanako;
  cin>>n;
  while (n!=0){
    cin>>taro>>hanako;
    if(taro==hanako){t_p++;h_p++;}
    else taro>hanako? t_p+=3 : h_p+=3;
    n--;
  }
  cout<<t_p<<" "<<h_p<<endl;
  return 0;
}