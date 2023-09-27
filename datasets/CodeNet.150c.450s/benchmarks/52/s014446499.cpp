#include <iostream>
using namespace std;

int main(){
  int stack[10];
  int *head;
  int car_num;

  head=stack;
  while(cin>>car_num){
    if(car_num>0){
      *head=car_num;
      head++;
    }
    else {
      head--;
      printf("%d\n", *head);
    }
  }

  return 0;
}