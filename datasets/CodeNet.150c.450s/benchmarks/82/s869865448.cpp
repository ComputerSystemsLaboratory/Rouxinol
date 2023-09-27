// Lec11-B Dice II
#include<iostream>
class Dice{
public:
  int d[6], tmp;
  Dice(int *in){
    for(int i=0; i<6; i++) d[i] = in[i];
  }
  int question(int top, int front){
    int tmp;
    while(!(top==d[0] && front==d[1])){
      if(top == d[0]){ tmp=d[1];d[1]=d[2];d[2]=d[4];d[4]=d[3];d[3]=tmp; }
      else if(front == d[1]){ tmp=d[0];d[0]=d[2];d[2]=d[5];d[5]=d[3];d[3]=tmp; }
      else{ tmp=d[0];d[0]=d[1];d[1]=d[5];d[5]=d[4];d[4]=tmp; }
    }
    return d[2];
  }
};
int main(){
  int in1[6], n, top, front;
  for(int i=0; i<6; i++) std::cin >> in1[i];
  std::cin >> n;
  Dice sample(in1);
  for(int i=0; i<n; i++){
    std::cin >> top >> front;
    std::cout << sample.question(top, front) << std::endl;
  }
  return 0;
}