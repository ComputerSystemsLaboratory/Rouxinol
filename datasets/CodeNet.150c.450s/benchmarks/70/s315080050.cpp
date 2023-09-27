#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
  
  int a,b,day;
  int tuki[12];
  string days[7];
  tuki[0]=31,tuki[1]=29,tuki[2]=31,tuki[3]=30;
  tuki[4]=31,tuki[5]=30,tuki[6]=31,tuki[7]=31;
  tuki[8]=30,tuki[9]=31,tuki[10]=30,tuki[11]=31;
  days[0] = "Wednesday";
  days[1] = "Thursday";
  days[2] = "Friday";
  days[3] = "Saturday";
  days[4] = "Sunday";
  days[5] = "Monday";
  days[6] = "Tuesday";

  while(1){
    day=0;
    cin >> a >> b;
    if(a == 0)break;
    for(int i=1;i<a;i++){
      day += tuki[i-1];
    }
    day += b;
    day %= 7;
    cout << days[day] << endl;
  }
  return 0;
}
  