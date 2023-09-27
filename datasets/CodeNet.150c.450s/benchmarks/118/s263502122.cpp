#include<iostream>
using namespace std;
int check(int year,int month);
int main(){
  int month,day,year;
  int count;
  cin>>count;
  for(int i=0;i<count;i++){
    int co=0;
    cin>>year>>month>>day;
    co=check(year,month)-day+1;
    day=1;
    month++;
    if(month==11){
      month=1;
      year++;
    }
    while(year<1000){
      //cout<<co<<endl;
      co+=check(year,month);
      month++;
      if(month==11){
	month=1;
	year++;
      }
    }
    cout<<co<<endl;
  }
}
int check(int year,int month){
  if(year%3==0)
    return 20;
  else if(month%2!=0){
    return 20;
  }
  else
    return 19;
}