// Lec11-A Dice I
#include<iostream>
class Dice{
public:
  int d[7], tmp;
  Dice(int *in){
    for(int i=0; i<6; i++) d[i] = in[i];
  }
  void Rolling(std::string str){
    for(int i=0; i<str.length(); i++){
      switch(str[i]){
        case 'N':
        tmp=d[0],d[0]=d[1],d[1]=d[5],d[5]=d[4],d[4]=tmp;
        break;
        case 'S':
        tmp=d[0],d[0]=d[4],d[4]=d[5],d[5]=d[1],d[1]=tmp;
        break;
        case 'E':
        tmp=d[0],d[0]=d[3],d[3]=d[5],d[5]=d[2],d[2]=tmp;
        break;
        case 'W':
        tmp=d[0],d[0]=d[2],d[2]=d[5],d[5]=d[3],d[3]=tmp;
        break;
      }
    }
  }
  void print(){
    std::cout << d[0] << std::endl;
  }
};
int main(){
  int in[6];
  std::string str;
  for(int i=0; i<6; i++) std::cin >> in[i];
  std::cin >> str;
  Dice sample(in);
  sample.Rolling(str);
  sample.print();
  return 0;
}