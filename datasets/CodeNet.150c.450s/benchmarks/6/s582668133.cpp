#include<iostream>
using namespace std;

int main(){
  int n[3];
  int tmp=0;
  for(int i=0;i<3;i++){
    cin >> n[i];
  }
  for(int i=0;i<2;i++){
    if(n[i] >= n[i+1]){
      cout << "No" << endl;
      tmp++;
      break;
    }
  }
  if(tmp==0) cout << "Yes" << endl;
}