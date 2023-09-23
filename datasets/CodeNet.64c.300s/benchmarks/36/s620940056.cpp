#include <iostream>

using namespace std;

int main(){
  int ary[3];
  int i, j, tmp;

  cin>>ary[0]>>ary[1]>>ary[2];
  for(j = 0; j < 2; j++){
    for(i = 0; i < 2; i++){
      if(ary[i] > ary[i+1]){
        tmp = ary[i];
        ary[i] = ary[i+1];
        ary[i+1] = tmp;
      }
    }
  }

  cout<<ary[0]<<" "<<ary[1]<<" "<<ary[2]<<endl;

}