#include<iostream>
using namespace std;

int main(){
  int str[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
  int mon,day;
  while(cin >>mon >>day){
    if(mon==0&&day==0)break;
    for(int i = 0 ; i < mon ; i++)
      day += str[i];
    day=day%7;
    if(day==0)cout<<"Wednesday"<<endl;
    else if(day==1)cout<<"Thursday"<<endl;
    else if(day==2)cout<<"Friday"<<endl;
    else if(day==3)cout<<"Saturday"<<endl;
    else if(day==4)cout<<"Sunday"<<endl;
    else if(day==5)cout<<"Monday"<<endl;
    else cout<<"Tuesday"<<endl;
  }
  return 0;
}