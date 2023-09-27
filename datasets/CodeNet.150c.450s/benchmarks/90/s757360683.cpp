#include <iostream>

using namespace std;

int main(){
  #define MMM 100
  int num_count[MMM] = {0};
  int num;
  int mode_value=0;

  while(cin >> num){
    num_count[num]++;
    if(num_count[num] > mode_value){
      mode_value++;
    }
  }
  
  for(int i=0;i<MMM;i++){
    if(num_count[i] == mode_value){
      cout << i << endl;
    }
  }
}