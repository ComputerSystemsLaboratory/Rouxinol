#include <iostream>
using namespace std;

int main(){
   int month=1,daily=1,day[13] ={0,31,29,31,30,31,30,31,31,30,31,30,31},date = 0;
   while(1){
    int poi;
    poi = 0;
    cin >> month >> daily;
    if(month == 0) break;
    for(int i = 1;i < month;++i){
       poi += day[i];
    }
    date = (poi + daily + 3) % 7;
    if(date == 0) cout << "Sunday" << endl;
    if(date == 1) cout << "Monday" << endl;
    if(date == 2) cout << "Tuesday" << endl;
    if(date == 3) cout << "Wednesday" << endl;
    if(date == 4) cout << "Thursday" << endl;
    if(date == 5) cout << "Friday" << endl;
    if(date == 6) cout << "Saturday" << endl;
  }
 return 0;
}