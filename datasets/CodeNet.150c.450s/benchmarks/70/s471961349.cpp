#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
  for(int i=0;i<12;i++)month[i+1]+=month[i];
  vector<string> day(7);
  day[0] = "Sunday";
  day[1] = "Monday";
  day[2] = "Tuesday";
  day[3] = "Wednesday";
  day[4] = "Thursday";
  day[5] = "Friday";
  day[6] = "Saturday";

  int a,b;
  while(true){
    cin>>a>>b;
    if(!a&&!b)break;
    cout<<day[(month[a-1]+b+3)%7]<<endl;
  }
  return 0;
}