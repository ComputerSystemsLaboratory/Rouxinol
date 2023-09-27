#include <iostream>
#include <cmath>
#include <vector>


using namespace std;
#define LENGTH 10

void printDay(int num){
  switch(num){
  case 0:
    cout << "Monday" << endl;
    break;
  case 1:
    cout << "Tuesday" << endl;
    break;
  case 2:
    cout << "Wednesday" << endl;
    break;
  case 3:
    cout << "Thursday" << endl;
    break;
  case 4:
    cout << "Friday" << endl;
    break;
  case 5:
    cout << "Saturday" << endl;
    break;
  case 6:
    cout << "Sunday" << endl;
    break;
  }
}
    
    

int main(){
  int month, day;
  int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  while(cin >> month >> day){
    int d=3;
      if(month==0){
      break;
    }

    for(int i=0;i<month-1;i++){
      d+=days[i];
      d = d%7;
    }

    for(int i=1;i<day;i++){
      d+=1;
      d = d%7;
    }
    printDay(d);
  }
}