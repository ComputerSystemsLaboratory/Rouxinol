# include <iostream>
# include <stdio.h>
# include <cmath>
# include <iomanip>
# include <cstring>
# include <string>
# include <cctype>
# include <algorithm> //transformの関数はaslgorithmライブラリに入っているみたい。
using namespace std;
class dice{
public:
  int label[6];
  void roll(char);
};
void dice::roll(char direction){
  int temp;
  if(direction == 'E'){
    temp = label[2];
    label[2] = label[0];
    label[0] = label[3];
    label[3] = label[5];
    label[5] = temp;
  }else if(direction == 'N'){
    temp = label[4];
    label[4] = label[0];
    label[0] = label[1];
    label[1] = label[5];
    label[5] = temp;
  }else if(direction == 'S'){
    temp = label[1];
    label[1] = label[0];
    label[0] = label[4];
    label[4] = label[5];
    label[5] = temp;
  }else if(direction == 'W'){
    temp = label[3];
    label[3] = label[0];
    label[0] = label[2];
    label[2] = label[5];
    label[5] = temp;
  }
}
int main(){
  dice d1;
  int q,num1,num2;
  for(int i = 0;i<6;i++){
    cin >> d1.label[i];
  }
  cin >> q;
  for(int i =0;i<q;i++){
    cin >> num1 >> num2;
    if(num1 == d1.label[1]){
      d1.roll('N');
    }else if(num1 == d1.label[2]){
      d1.roll('W');
    }else if(num1 == d1.label[3]){
      d1.roll('E');
    }else if(num1 == d1.label[4]){
      d1.roll('S');
    }else if(num1 == d1.label[5]){
      d1.roll('S');
      d1.roll('S');
    }

    if(num2 == d1.label[1]){
      cout << d1.label[2] << endl;
    }else if(num2 == d1.label[2]){
      cout << d1.label[4] << endl;
    }else if(num2 == d1.label[4]){
      cout << d1.label[3] << endl;
    }else if(num2 == d1.label[3]){
      cout << d1.label[1] << endl;
    }
  }
  return 0;
}
