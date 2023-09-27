#include <iostream>
#include <cmath>
using namespace std;
int  compr(string a,string b){
  for(int i = 0; min(a.size(),b.size()) > i; i++){
    if(a[i] < b[i]){
      return 1;
    }else if(a[i] > b[i]){
      return 0;
    }
  }
  if(a.size() < b.size()){
    return 1;
  }else if(a.size() > b.size()){
    return 0;
  }else{
    return -1;
  }
}
int main(){
  int n;cin>>n;
  int t = 0;
  int h = 0;
  for(int i = 0; n > i; i++){
    string a,b;cin>>a>>b;
    int k = compr(a,b);
    if(k == 1){
      t += 3;
    }else if(k == 0){
      h += 3;
    }else{
      t+=1;
      h+=1;
    }
  }
  cout << h << " " << t << endl;
}
