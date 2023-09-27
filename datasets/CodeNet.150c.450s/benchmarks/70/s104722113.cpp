#include <iostream>
#include <string>
#include <vector>

using namespace std;
string a[7] = {
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
  "Sunday"};
int main(void){
  int aa,b;
  int mon[12] = {31,29,
		 31,30,
		 31,30,
		 31,31,
		 30,31,
		 30,31};
  while(cin>>aa>>b,aa+b){
    int d = b;
    for(int i = 0 ; i < aa-1 ; i ++){
      d += mon[i];
      //cout<<d<<endl;
    }
    
    cout<<a[(d+2)%7]<<endl;
  }
  //*/
}