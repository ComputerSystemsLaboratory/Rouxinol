#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  bool judge[31] = {};
  for(int i = 0 , a ; i < 28 ; i++ ) cin >> a , judge[a] = true;
  for(int i = 1 ; i < 31 ; i++ ) if(!judge[i]) cout << i << endl;
}