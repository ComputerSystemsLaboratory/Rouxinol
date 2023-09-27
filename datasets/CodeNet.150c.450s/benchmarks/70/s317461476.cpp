#include<iostream>
using namespace std;
void daysel(int x){
  switch(x % 7){
  case 6:
  cout << "Tuesday"<<endl; break;
  case 0:
  cout <<"Wednesday"<<endl;  break;
  case 1:
  cout <<"Thursday"<<endl;  break;
  case 2:
  cout <<"Friday"<<endl;  break;
  case 3:
  cout <<"Saturday"<<endl;  break;
  case 4:
  cout <<"Sunday"<<endl;  break;
  case 5:
  cout <<"Monday"<<endl;  break;
  }
}
void daycal(int month,int day){
  int x;
  switch(month){
  case 1:
  x = day; break;
  case 2:
  x = 31 + day; break;
  case 3:
  x = 60 + day; break;
  case 4:
  x = 91 + day; break;
  case 5:
  x = 121 + day; break;
  case 6:
  x = 152 + day; break;
  case 7:
  x = 182 + day; break;
  case 8:
  x = 213 + day; break;
  case 9: 
  x = 244 + day;break;
  case 10:
  x = 274 + day;break;
  case 11: 
  x = 305 + day; break;
  case 12:
    x = 335 + day; break;
  }
  daysel(x);

    }
int main(){
  int month,day;
  while(cin >> month >> day && !(month == 0 && day ==0)){   
      daycal(month,day);
  }  
  
}
      