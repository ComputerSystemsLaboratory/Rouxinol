#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int mount[10]={};

  for(int i=0;i < 10;i++){ 
    cin >> mount[i];
  }
  sort(mount,mount+10);

  for(int i=9;i > 6;i--){
    
    cout << mount[i] << endl;
  }
  return 0;
}

