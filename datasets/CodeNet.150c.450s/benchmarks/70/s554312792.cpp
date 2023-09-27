#include<iostream>

int monthes(int i){
  if(i==2){
    return 29;
  }
  if(i==4||i==6||i==9||i==11){
    return 30;
  }else{
    return 31;
  }
}

int main(){
  int month,day,sum;

  while(std::cin >> month >> day){
    if(month==0){
      break;
    }
    sum = 0;
    for(int i=1;i<month;i++){
      sum += monthes(i);
    }
    sum += day-1;
    switch(sum%7){
      case 0: std::cout << "Thursday" << std::endl; break;
      case 1: std::cout << "Friday" << std::endl; break;
      case 2: std::cout << "Saturday" << std::endl; break;
      case 3: std::cout << "Sunday" << std::endl; break;
      case 4: std::cout << "Monday" << std::endl; break;
      case 5: std::cout << "Tuesday" << std::endl; break;
      case 6: std::cout << "Wednesday" << std::endl; break;
    }
  }
}