#include <iostream>
#include <vector>
using namespace std;

int main(){
  int serchn,numn;
  for(int a = 0;;a++){
    cin >> numn >> serchn;
    if(numn == 0 && serchn == 0){
      break;
    }
    int outp = 0;
    int gh = 0;
    vector<int> num(numn,0);
    for(int n = 0;n<numn;n++){
      cin >> num[n];
    }
    for(int n = 0;n<serchn;n++){
      outp += num[n];
    }
    gh = outp;
    for(int a = 0,b=serchn;b<numn;a++,b++){
      gh += num[b];
      gh -= num[a];
      if(gh > outp)outp = gh;
    }
    cout << outp << endl;
  }
  return 0;
}