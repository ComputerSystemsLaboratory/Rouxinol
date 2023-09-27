#include <iostream>
using namespace std;
int sunday(int);
int monday(int);
int tuesday(int);
int wednesday(int);
int thursday(int);
int flyday(int);
int saturday(int);


int main(){
  int day ,month ,today;
  while(true){
    cin >> month >> day;
    if( month == 0 && day == 0 ){
      break;
    }

    if( month == 1 || month == 4 || month == 7 ){
      today = thursday(day);
    }
    
    if( month == 9 || month == 12 ){
      today = wednesday(day);
    }
    
    if( month == 3 || month == 11 ){
      today =  monday(day);
    }
    
    if( month == 6 ){
      today =  tuesday(day);
    }
    
    if( month == 2 || month == 8 ){
      today = sunday(day);
    }
    
    if( month == 10 ){
      today =  flyday(day);
    }
    
    if( month == 5 ){
      today =  saturday(day);
    }

    switch(today){
    case 0:
      cout << "Sunday" << endl;
      break;

    case 1:
      cout << "Monday" << endl;
      break;
    
    case 2:
      cout << "Tuesday" << endl;
      break;

    case 3:
      cout << "Wednesday" << endl;
      break;

    case 4:
      cout << "Thursday" << endl;
      break;
    
    case 5:
      cout << "Friday" << endl;
      break;

    case 6:
      cout << "Saturday" << endl;
      break;
    }
  }
  return 0;
}
  
int sunday(int day){
  int i ,today=0;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}


int monday(int day){
   int i ,today=1;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}


int tuesday(int day){
   int i ,today=2;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}


int wednesday(int day){
   int i ,today=3;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}


int thursday(int day){
    int i ,today=4;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}


int flyday(int day){
  int i ,today=5;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}


int saturday(int day){
    int i ,today=6;
  for( i=1 ; i<day ; i++ ){
    today++;
    if( today == 7 ){
      today = 0;
    }
  }
  return today;
}