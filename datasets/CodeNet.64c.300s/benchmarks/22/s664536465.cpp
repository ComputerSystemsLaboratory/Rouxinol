#include<iostream>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    int edge[3];
    for(int i=0,a; i<3; i++){
      cin >>a;
      edge[i] = a*a;
    }
    if(edge[0] == edge[1]+edge[2]) cout <<"YES"<<endl;
    else if(edge[1] == edge[0]+edge[2]) cout <<"YES"<<endl;
    else if(edge[2] == edge[1]+edge[0]) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}