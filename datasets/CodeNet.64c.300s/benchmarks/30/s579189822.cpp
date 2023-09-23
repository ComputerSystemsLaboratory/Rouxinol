#include<iostream>
using namespace std;
int main(){
  int input;
  while(cin >> input){
    if(input == 0) break;
    input = 1000 - input;
    int hantei[6] = {500,100,50,10,5,1};
    int n = 0;
    for(int i=0;i<6;i++){
      n += input / hantei[i];
      input %= hantei[i];
    }
    cout << n << endl;
  }
}
