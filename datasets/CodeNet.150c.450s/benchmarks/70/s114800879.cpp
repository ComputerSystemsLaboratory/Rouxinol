#include<iostream>
#include<string>
using namespace std;
int main(){
  int month,day,bell;
  string s;
  while(1){
    cin >> month >> day;
    if(month==0 && day==0){
      break;
    }
    if(month==1 || month==4 || month==7){
      bell=4;
    }
    else if(month==2 || month==8){
      bell=7;
    }
    else if(month==3 || month==11){
      bell=1;
    }
    else if(month==5){
      bell=6;
    }
    else if(month==6){
      bell=2;
    }
    else if(month==9 || month==12){
      bell=3;
    }
    else if(month==10){
      bell=5;
    }

    for(int i=1;i<day;i++){
      bell++;
      if(bell>=8){
	bell=1;
      }
    }

    if(bell==1){
      s="Monday";
    }
    else if(bell==2){
      s="Tuesday";
    }
    else if(bell==3){
      s="Wednesday";
    }
    else if(bell==4){
      s="Thursday";
    }
    else if(bell==5){
      s="Friday";
    }
    else if(bell==6){
      s="Saturday";
    }
    else if(bell==7){
      s="Sunday";
    }
    cout << s << endl;
  }
  return (0);
}