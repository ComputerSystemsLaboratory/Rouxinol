#include<iostream>
using namespace std;
int main(){
  int n[4],n2[4],hit,blow;
  while(cin>>n[0]>>n[1]>>n[2]>>n[3]>>n2[0]>>n2[1]>>n2[2]>>n2[3]){
    hit = 0;
    blow = 0;
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
      if(n[i]==n2[j]&&i==j) hit++;
      else if(n[i]==n2[j]) blow++;
      }
    }
    cout << hit << ' ' << blow << endl;
  }
  return 0;
}