#include <iostream>

class Dice{
public:
  Dice(){
    number = new int[6];
    work = new int[6];
  }
  ~Dice(){
    delete[] number;
    delete[] work;
  }

  void setLabel(int index, int num){
    number[index] = num;
  }

  void roll(char dst){
    for(int i=0; i<6; i++) work[i] = number[i];
    switch(dst){
      case 'E':
        setNumber(work[3], work[1], work[0], work[5], work[4], work[2]);
        break;
      case 'N':
        setNumber(work[1], work[5], work[2], work[3], work[0], work[4]);
        break;
      case 'S':
        setNumber(work[4], work[0], work[2], work[3], work[5], work[1]);
        break;
      case 'W':
        setNumber(work[2], work[1], work[5], work[0], work[4], work[3]);
        break;
    }
  }

  int returnPeek(){
    return number[0];
  }

private:
  void setNumber(int n0, int n1, int n2, int n3, int n4, int n5){
    number[0] = n0;
    number[1] = n1;
    number[2] = n2;
    number[3] = n3;
    number[4] = n4;
    number[5] = n5;
  }

private:
  int* number;
  int* work;
};

int main(){
  Dice dice;
  int label;
  std::string str;
  for(int i=0; i<6; i++){
    std::cin >> label;
    dice.setLabel(i, label);
  }
  std::cin >> str;
  for(int i=0; i<str.size(); i++){
    dice.roll(str[i]);
  }
  std::cout << dice.returnPeek() << std::endl;;
}

