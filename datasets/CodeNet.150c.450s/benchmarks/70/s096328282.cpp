#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int,int> MonthDay;
int main(){
  int monthnum[]={
    31,29,31,30,31,30,31,31,30,31,30,31
  };
  const string weekname[]={
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
  };
  vector<MonthDay> data;
  int month,day;
  while(cin>>month>>day){
    if(!month)break;
    data.push_back(MonthDay(month,day));
  }
  for(int i=0;i<data.size();i++){
    int daysum=0;
    for(int j=0;j<data[i].first-1;j++){
      daysum+=monthnum[j];
    }
    daysum+=data[i].second;
    int weekindex=(daysum+2)%7;
    cout<<weekname[weekindex]<<endl;
  }
}